#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character from the input string
    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    printf("Enter a character to count its occurrences: ");
    scanf("%c", &ch);

    int count = countOccurrences(str, ch);
    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
