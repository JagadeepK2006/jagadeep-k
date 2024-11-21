#include <stdio.h>
#include <ctype.h> // For using tolower() and isalnum() functions
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0, right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }
        
        left++;
        right--;
    }

    return 1; // Is a palindrome
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the input string
    int length = strlen(str);
