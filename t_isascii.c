#include <stdio.h>
#include "libft.h" 

/**
 * Helper function to test and print the result.
 * Change isascii to ft_isascii if testing your library.
 */
void test_isascii_char(int c) {
    printf("Testing value %d ('%c' if printable): ", c, (c >= 32 && c <= 126) ? (char)c : '?');
    
    // Using the standard isascii function here for the demonstration
    if (ft_isascii(c)) { 
        printf("RESULT: True (Is ASCII 0-127)\n");
    } else {
        printf("RESULT: False (Not ASCII)\n");
    }
}

int main(void) {
    printf("--- Testing isascii() ---\n");
    
    // 1. Test Standard Printable ASCII (0-127)
    printf("\n-- Printable ASCII (0-127) --\n");
    test_isascii_char('A');    // 65
    test_isascii_char('0');    // 48
    test_isascii_char('$');    // 36
    
    // 2. Test Boundary Cases
    printf("\n-- Boundary Cases --\n");
    test_isascii_char(0);      // NUL (Control Character)
    test_isascii_char(127);    // DEL (Control Character) - Highest standard ASCII
    
    // 3. Test Non-ASCII (128 and above)
    printf("\n-- Non-ASCII (>= 128) --\n");
    test_isascii_char(128);    // First non-ASCII value
    test_isascii_char(200);
    test_isascii_char(255);    // Highest possible value for a signed char
    
    printf("-------------------------\n");
    
    return 0;
}
