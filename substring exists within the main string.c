#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[100];
    int i, j, mainLen, subLen, found;

    // Input the main string
    printf("Enter the main string: ");
    fgets(mainStr, sizeof(mainStr), stdin);
    mainLen = strlen(mainStr);

    // Remove the newline character from the main string
    if (mainStr[mainLen - 1] == '\n') {
        mainStr[mainLen - 1] = '\0';
        mainLen--;
    }

    // Input the substring
    printf("Enter the substring: ");
    fgets(subStr, sizeof(subStr), stdin);
    subLen = strlen(subStr);

    // Remove the newline character from the substring
    if (subStr[subLen - 1] == '\n') {
        subStr[subLen - 1] = '\0';
        subLen--;
    }

    // Check for substring
    found = 0;
    for (i = 0; i <= mainLen - subLen; i++) {
        for (j = 0; j < subLen; j++) {
            if (mainStr[i + j] != subStr[j]) {
                break;
            }
        }
        if (j == subLen) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("The substring exists in the main string.\n");
    } else {
        printf("The substring does not exist in the main string.\n");
    }

    return 0;
}
