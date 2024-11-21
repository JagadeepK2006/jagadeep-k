#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    // Loop through each character of the strings
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1; // str1 is less than str2
        } else if (str1[i] > str2[i]) {
            return 1; // str1 is greater than str2
        }
        i++;
    }

    // Check if one string is longer than the other
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // Strings are equal
    } else if (str1[i] == '\0') {
        return -1; // str1 is less than str2
    } else {
        return 1; // str1 is greater than str2
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the strings if present
    int len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    int len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically less than the second string.\n");
    } else {
        printf("The first string is lexicographically greater than the second string.\n");
    }

    return 0;
}
