#include <stdio.h>
#include <string.h> // Standard library for size_t and comparison (optional)

// Use your custom header for your function
#include "libft.h" 

// NOTE: Ensure your libft.h contains the prototype: 
// size_t ft_strlen(const char *s);

void test_ft_strlen(char *str) {
    size_t result_ft;
    
    // Check if the input pointer is NULL before calling your function
    if (str == NULL) {
        printf("Testing NULL pointer: Segmentation fault expected (or robust NULL handling).\n");
        // NOTE: Standard strlen does NOT handle NULL and will crash.
        // Your ft_strlen should ideally check for NULL and return 0 or be used carefully.
        return; 
    }

    result_ft = ft_strlen(str);

    printf("String: \"%s\"\n", str);
    printf("Length (ft_strlen): %zu\n", result_ft);
    
    // Optionally, compare with the standard function for verification
    #ifdef __STDC_WANT_LIB_EXT1__
    size_t result_std = strlen(str);
    printf("Length (strlen):    %zu\n", result_std);
    if (result_ft == result_std) {
        printf("Status: Passed\n");
    } else {
        printf("Status: FAILED (Expected %zu, got %zu)\n", result_std, result_ft);
    }
    #endif
    printf("-------------------------\n");
}

int main(void) {

    char s1[100] = "This is a test string"; 	
    printf("--- Testing ft_strlen() ---\n");
    
    // 1. Regular String
    test_ft_strlen(s1);
    
    // 2. Empty String
    test_ft_strlen("");
    
    // 3. String with spaces and numbers
    test_ft_strlen("123 ABC 456");

    // 4. String with escape sequences (note: \n is 1 character)
    test_ft_strlen("Line1\nLine2");

    // 5. Very long string (just to be sure)
    char long_str[256];
    memset(long_str, 'X', 255);
    long_str[255] = '\0';
    test_ft_strlen(long_str);

    // 6. Test a pointer to NULL (CAUTION: standard strlen crashes here)
    // test_ft_strlen(NULL); 
    
    return 0;
}
