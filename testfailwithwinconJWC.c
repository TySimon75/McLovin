int main() {
    const char* secretWord = "apple"; // Secret word to be guessed
    int attempts = 0; // Counter for failed attempts

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
            attempts++;
            printf("Incorrect guess. Try again.\n");
            if (attempts <= 10) {
                printf("Sorry, you've reached the maximum number of attempts.\n");
                printf("The correct word was: %s\n", secretWord);
                break;
            }
        }
    }

    return 0;
}
