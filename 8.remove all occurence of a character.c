#include <stdio.h>
#include <string.h>

void removeCharacter(char str[], char ch) {
    int i, j = 0;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Null-terminate the modified string
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

    printf("Enter the character to remove: ");
    scanf("%c", &ch);

    removeCharacter(str, ch);

    printf("Modified string: %s\n", str);

    return 0;
}
