#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a guessed word is valid
bool isValidWord(const char* guessedWord, const char* secretWord) {
    // Check if the guessed word has the same length as the secret word
    if (strlen(guessedWord) != strlen(secretWord)) {
        return false;
    }

    // Check if each letter in the guessed word exists in the secret word
    for (int i = 0; i < strlen(secretWord); ++i) {
        bool found = false;
        for (int j = 0; j < strlen(guessedWord); ++j) {
            if (guessedWord[j] == secretWord[i]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }

    return true;
}

int main() {
    const char* secretWord = "apple"; // Secret word to be guessed

    // Main loop
    while (true) {
        char guessedWord[100];
        printf("Enter your guess: ");
        scanf("%s", guessedWord);

        // Check if the guessed word is valid
        if (!isValidWord(guessedWord, secretWord)) {
            printf("Invalid guess. Try again.\n");
            continue;
        }

        // Check if the guessed word is correct
        if (strcmp(guessedWord, secretWord) == 0) {
            printf("Congratulations! You've guessed the word: %s\n", secretWord);
            break;
        } else {
            printf("Incorrect guess. Try again.\n");
        }
    }

    return 0;
}
