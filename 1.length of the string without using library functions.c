#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string
    int length = 0; // Variable to store the length of the string
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string from the user
    
    // Loop through the string until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++; // Increment the length counter
    }
    
    // The above loop counts the newline character '\n' added by fgets
    // Decrement the length if it includes the newline character
    if (str[length - 1] == '\n') {
        length--;
    }
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}
