/* 
    McLovin's WORDLE
    Ty, Collin, Jonathan
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define WORD_LENGTH 5
//every word is 5 characters//

char* chooseTargetWord(const char* filename) 
{
    //opens file//
    FILE* file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("\nError opening file");
        return NULL;
    }

    //count the number of words in wordlist.txt//
    int wordCount = 0;
    char buffer[WORD_LENGTH];
    while (fscanf(file, "%5s", buffer) == 1) 
    {
        wordCount++;
    }

    //chooses a random word//
    srand(time(NULL));
    //randomizes based on time skimming through program//
    int randomIndex = rand() % wordCount;

    //resets pointer to beginning//
    rewind(file);

    //skips tokens until target word//
    for (int i = 0; i < randomIndex; i++) 
    {
        fscanf(file, "%5s", buffer);
    }

    //reads selected target word, allocates mem to store it//
    char* targetWord = (char*)malloc((WORD_LENGTH + 1) * sizeof(char));
    if (targetWord == NULL) 
    {
        printf("Memory allocation failed\n");
        fclose(file);
        return NULL;
    }
    fscanf(file, "%5s", targetWord);

    fclose(file);

    return targetWord;
}
                          
int compareWords(const char* targetWord, const char* userGuess) {
    int correctPositionCount = 0;
    int correctCharacterCount = 0;
    char tempTarget[WORD_LENGTH + 1];
    char tempGuess[WORD_LENGTH + 1];
    strcpy(tempTarget, targetWord);
    strcpy(tempGuess, userGuess);

    //matches letters in correct position//
    for (int i = 0; i < WORD_LENGTH; i++) {
        if (tempTarget[i] == tempGuess[i]) {
            correctPositionCount++;
            tempTarget[i] = ' ';
            tempGuess[i] = '*';
        }
    }

    //matches correct characters in wrong positions//
    for (int i = 0; i < WORD_LENGTH; i++) {
        for (int j = 0; j < WORD_LENGTH; j++) {
            if (tempTarget[i] != ' ' && tempTarget[i] == tempGuess[j] && tempGuess[j] != '*') {
                correctCharacterCount++;
                printf("\n%c is in the word but in the wrong position", userGuess[j]); //prints the correct letter//
                tempTarget[i] = ' ';
                tempGuess[j] = '*';
                break;
            }
        }
    }

    //finds wrong letters in incorrect positions//
    printf("\nIncorrect letters in wrong positions: ");
    for (int i = 0; i < WORD_LENGTH; i++) {
        if (tempGuess[i] != '*') {
            printf("%c ", userGuess[i]);
        }
    }
    printf("\n");

    printf("Correct letters in correct positions: %d\n", correctPositionCount);
    printf("Correct letters in wrong positions: %d\n", correctCharacterCount);

    if (correctPositionCount == WORD_LENGTH) {
        return 1; //correct word//
    } else {
        return 0; //incorrect word//
    }
}

int isWordInList(const char* filename, const char* word) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) 
    {
        printf("Error opening file\n");
        return 0;
    }

    char buffer[WORD_LENGTH + 1];
    while (fscanf(file, "%6s", buffer) == 1) {
        if (strcmp(buffer, word) == 0) {
            fclose(file);
            return 1;
            //return 1 means word is in list//
        }
    }

    fclose(file);
    return 0; 
    //return 0 means word is not in list//
}

int main() {
    srand(time(NULL));
    char* targetWord = chooseTargetWord("wordlist.txt");
    if (targetWord != NULL) {
        printf("Welcome to McLovin's WORDLE!\n");
        printf("Guesses MUST be in all CAPS\n");

        //six guesses//
        for (int guessCount = 0; guessCount < 6; guessCount++) {
            printf("You have %d guesses left.\n", 6 - guessCount);
            printf("Guess a 5-letter word (from the Scrabble word list): ");
            char userGuess[WORD_LENGTH + 1];
            scanf("%5s", userGuess);

            if (isWordInList("wordlist.txt", userGuess)) {
                int result = compareWords(targetWord, userGuess);
                if (result == 1) {
                    printf("Congratulations! You guessed the word correctly: %s\n", targetWord);
                    break; //exits loop if word is guessed correctly//
                } else {
                    printf("Sorry, that's not the correct word.\n");
                }
            } else {
                printf("Your guess is not a valid word in the word list.\n");
            }
        }

        printf("The correct word was: %s\n", targetWord);
        free(targetWord);
    }

    return 0;
}