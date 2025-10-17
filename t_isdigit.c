#include <stdio.h>
#include "libft.h"

void test_isdigit(char c) {
    printf("Testing character '%c' (ASCII %d): ", c, c);
    
    // isdigit() returns a non-zero value (true) if the character is a digit,
    // and 0 (false) otherwise.
    if (ft_isdigit(c)) {
        printf("RESULT: It IS a digit.\n");
    } else {
        printf("RESULT: It is NOT a digit.\n");
    }
}

int main(void) {
    printf("--- Testing isdigit() ---\n");
    
    // 1. Test Digits (Should return true/non-zero)
    test_isdigit('0');
    test_isdigit('5');
    test_isdigit('9');
    
    printf("\n");
    
    // 2. Test Non-Digits (Should return false/zero)
    test_isdigit('A'); // Letter
    test_isdigit('z'); // Letter
    test_isdigit('$'); // Symbol
    test_isdigit(' '); // Space
    
    printf("-------------------------\n");
    
    return 0;
}
