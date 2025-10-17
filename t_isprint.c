#include <stdio.h>
#include "libft.h"

/**
 * Helper function to test and print the result.
 */
void test_isprint_char(int c) {
    // Only print the character if it's actually printable, otherwise show its value
    printf("Testing value %d ('%c' if printable): ", c, (c >= 32 && c <= 126) ? (char)c : '?');
    
    // isprint() returns a non-zero value (true) if the character is printable.
    if (ft_isprint(c)) { 
        printf("RESULT: True (Is printable, including space)\n");
    } else {
        printf("RESULT: False (Is a control character or DEL)\n");
    }
}

int main(void) {
    printf("--- Testing isprint() ---\n");
    
    // 1. Test Printable Characters (32 to 126)
    printf("\n-- Printable Characters --\n");
    test_isprint_char('A');    // 65 (Letter)
    test_isprint_char('0');    // 48 (Digit)
    test_isprint_char(' ');    // 32 (Space - the first printable character)
    test_isprint_char('~');    // 126 (Tilde - the last printable character)
    
    // 2. Test Non-Printable Control Characters (0-31 and 127)
    printf("\n-- Non-Printable Control Characters --\n");
    test_isprint_char('\0');   // 0 (NUL - Control)
    test_isprint_char(10);     // 10 (Line Feed - Control)
    test_isprint_char(127);    // 127 (DEL - Control)
    
    // 3. Test Extended Characters (Non-ASCII, for completeness)
    printf("\n-- Extended (Non-ASCII) --\n");
    test_isprint_char(150);    // Value outside the standard range (often non-printable)
    
    printf("-------------------------\n");
    
    return 0;
}
