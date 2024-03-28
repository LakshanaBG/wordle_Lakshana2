#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to check if a word contains a specific letter
int containsLetter(char* word, char letter) {
    return strchr(word, letter) != NULL;
}

// Function to read words from a file and filter them
void filterWords(char* filePath, char letter) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filePath);
        return;
    }

    char word[100];
    while (fscanf(file, "%s", word) != EOF) {
        if (containsLetter(word, letter)) {
            printf("%s\n", word);
        }
    }

    fclose(file);
}

int main() {
    filterWords("/home/linux/wordle_Lakshana2/src/bdd_wordle.txt", 'a');
    return 0;
}
