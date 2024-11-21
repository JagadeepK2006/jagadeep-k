#include <stdio.h>

void concatenate(char dest[], char src[]) {
    int i = 0, j = 0;

    // Find the end of the destination string
    while (dest[i] != '\0') {
        i++;
    }

    // Append the source string to the destination string
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Null terminate the concatenated string
    dest[i] = '\0';
}

int main() {
    char str1[200], str2[100];

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

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
