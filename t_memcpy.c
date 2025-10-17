#include <stdio.h>
#include <string.h>  // For standard functions (memcpy, size_t, etc.)
#include <stdlib.h>  // For malloc

// Use your custom header for your function
#include "libft.h" 

// NOTE: Ensure your libft.h contains the prototype: 
// void *ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Helper function to print a memory block's content.
 */
void print_memory(const char *label, const void *ptr, size_t size) {
    const unsigned char *p = ptr;
    size_t i;
    printf("  %s (%zu bytes): ", label, size);
    for (i = 0; i < size; i++) {
        // Print the byte value in hexadecimal
        printf("%02X ", p[i]);
    }
    printf("\n");
}

/**
 * Performs a single ft_memcpy test case.
 */
void test_memcpy_case(char *label, char *src_data, size_t n) {
    // 1. Setup: Destination must be large enough
    size_t dst_size = n + 5; // Allocate extra space for verification
    char *dst = (char *)malloc(dst_size);
    
    if (dst == NULL) {
        perror("malloc failed");
        return;
    }
    
    // Fill destination with a known non-zero pattern (e.g., 'Z' or 0xFF) 
    // to prove that only the first 'n' bytes are overwritten.
    memset(dst, 0xFF, dst_size); 

    printf("\n-- Test Case: %s --\n", label);
    printf("  Source data: \"%s\"\n", src_data);
    
    // 2. Execution: Copy 'n' bytes
    ft_memcpy(dst, src_data, n);
    
    // 3. Verification
    
    // Check if copy was successful by printing the memory content
    print_memory("Source Bytes", src_data, n);
    print_memory("Dest. Bytes", dst, dst_size);

    // Create a temporary string from the copied data for clean output
    char *result_str = (char *)malloc(n + 1);
    if (result_str) {
        memcpy(result_str, dst, n);
        result_str[n] = '\0';
        printf("  Result String: \"%s\"\n", result_str);
        free(result_str);
    }
    
    // Optional: Compare against standard memcpy result
    char *std_dst = (char *)malloc(dst_size);
    if (std_dst) {
        memset(std_dst, 0xFF, dst_size);
        memcpy(std_dst, src_data, n);
        
        if (memcmp(dst, std_dst, dst_size) == 0) {
            printf("  Verification: SUCCESS (Matches standard memcpy)\n");
        } else {
            printf("  Verification: FAILED (Output does not match standard)\n");
        }
        free(std_dst);
    }

    free(dst);
}

int main(void) {
    printf("--- Testing ft_memcpy() ---\n");
    
    // 1. Basic copy of a whole string
    test_memcpy_case("Copy Full String (12 bytes)", "Hello World!", 12);
    
    // 2. Partial copy (copying only part of the string)
    test_memcpy_case("Partial Copy (5 bytes)", "Goodbye", 5);

    // 3. Copy including a null terminator
    test_memcpy_case("Copy with NULL (7 bytes)", "Data\0567", 7);
    
    // 4. Edge Case: Copying 0 bytes
    test_memcpy_case("Copy Zero Bytes", "Anything", 0);

    // Note: ft_memcpy is NOT meant for overlapping regions. 
    // That is the job of ft_memmove, so do not test overlapping source/destination here.

    printf("---------------------------\n");
    
    return 0;
}
