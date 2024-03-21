#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 50
#define MAX_WORDS 100

int main() {
    char words[MAX_WORDS][MAX_WORD_LENGTH]; // Array to store words
    int numWords = 0; // Number of words read
    FILE *filePointer;
    char fileName[] = "word_bank.txt"; // Name of the file containing the word bank

    // Open the file
    filePointer = fopen(fileName, "r");

    // Check if the file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file %s\n", fileName);
        return 1; // Return with error code
    }

    // Read words from the file
    while (fscanf(filePointer, "%s", words[numWords]) == 1) {
        numWords++;
        if (numWords >= MAX_WORDS) {
            printf("Maximum number of words reached. Exiting...\n");
            break;
        }
    }

    // Close the file
    fclose(filePointer);

    // Display the words read
    printf("Words read from the file:\n");
    for (int i = 0; i < numWords; i++) {
        printf("%s\n", words[i]);
    }

    return 0; // Return success
}
