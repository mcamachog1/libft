#include <stdio.h>
// Use your custom header for your function
#include "libft.h" 
// Or the standard header: #include <ctype.h>

/**
 * Helper function to perform the test and print the result clearly.
 * Note: Assumes ft_isalpha is defined to take an int and return an int.
 */
void test_ft_isalpha(char c) {
    printf("Testing character '%c' (ASCII %d): ", c, c);
    
    // ft_isalpha() should return a non-zero value (true) if the character is a letter.
    if (ft_isalpha(c)) {
        printf("RESULT: It IS an alphabet.\n");
    } else {
        printf("RESULT: It is NOT an alphabet.\n");
    }
}

int main(void) {
    printf("--- Testing ft_isalpha() ---\n");
    
    // 1. Test Uppercase Letters (Should be true)
    printf("\n-- Uppercase --\n");
    test_ft_isalpha('A');
    test_ft_isalpha('G');
    test_ft_isalpha('Z');
    
    // 2. Test Lowercase Letters (Should be true)
    printf("\n-- Lowercase --\n");
    test_ft_isalpha('a');
    test_ft_isalpha('k');
    test_ft_isalpha('z');
    
    // 3. Test Non-Alphabetic Characters (Should be false)
    printf("\n-- Non-Alphabetic --\n");
    test_ft_isalpha('0'); // Digit
    test_ft_isalpha('9'); // Digit
    test_ft_isalpha(' '); // Space
    test_ft_isalpha('_'); // Symbol
    test_ft_isalpha('@'); // Symbol
    
    printf("----------------------------\n");
    
    return 0;
}
