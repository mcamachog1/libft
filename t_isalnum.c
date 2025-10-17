#include <stdio.h>
#include "libft.h" // Substitute for <ctype.h>

/**
 * Helper function to perform the test and print the result clearly.
 * Note: Assumes ft_isalnum is defined to take an int and return an int.
 */
void test_isalnum(char c) {
    printf("Testing character '%c' (ASCII %d): ", c, c);
    
    // Using ft_isalnum() instead of isalnum()
    if (ft_isalnum(c)) {
        printf("RESULT: It IS alphanumeric.\n");
    } else {
        printf("RESULT: It is NOT alphanumeric.\n");
    }
}

// NOTE: You must include the prototype for ft_isalnum in your libft.h:
// int ft_isalnum(int c);

int main(void) {
    printf("--- Testing ft_isalnum() ---\n");
    
    // 1. Test Letters 
    test_isalnum('a');
    test_isalnum('Z');
    
    printf("\n");
    
    // 2. Test Digits
    test_isalnum('0');
    test_isalnum('8');
    
    printf("\n");
    
    // 3. Test Non-Alphanumeric Characters 
    test_isalnum('_'); 
    test_isalnum('-'); 
    test_isalnum(' '); 
    test_isalnum('#'); 
    
    printf("-------------------------\n");
    
    return 0;
}
