#include <stdio.h>
#include <string.h>  // Required for standard memset for comparison and size_t
#include <stdlib.h>  // Required for malloc and free

// Use your custom header for your function
#include "libft.h" 

// NOTE: Ensure your libft.h contains the prototype: 
// void *ft_memset(void *s, int c, size_t n);

/**
 * Helper function to print a block of memory (useful for debugging memset).
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

int main(void) {
    printf("--- Testing ft_memset() ---\n");
    
    // --- Test 1: Zeroing out an Integer Array ---
    printf("\n-- Test 1: Zeroing 5 Integers --\n");
    int intArray[5];
    size_t size_int = sizeof(intArray);

    // Call ft_memset to set all 20 bytes (5 * 4) to 0
    ft_memset(intArray, 0, size_int); 
    
    // In memory, this should be '00 00 00 00' repeated 5 times.
    print_memory("Result Bytes", intArray, size_int);
    printf("  Integer Value Check (First Element): %d (Should be 0)\n", intArray[0]);
    

    // --- Test 2: Initializing a String Buffer ---
    printf("\n-- Test 2: Filling a String with 'X' --\n");
    char strBuffer[10 + 1]; // +1 for the final null terminator
    size_t size_str = 10;
    
    // Fill the first 10 bytes with 'X' (ASCII 58)
    ft_memset(strBuffer, 'X', size_str); 
    strBuffer[size_str] = '\0'; // Manually null-terminate for printf
    
    printf("  String: \"%s\"\n", strBuffer);
    print_memory("Result Bytes", strBuffer, size_str); // Check if bytes are 58 58 ...


    // --- Test 3: Using a Non-Zero Byte on Allocated Memory ---
    printf("\n-- Test 3: Setting Allocated Memory to Byte 0xAE --\n");
    // We will use the decimal value 174, which is 0xAE in hex.
    char *memBlock = (char *)malloc(8); 
    
    if (memBlock == NULL) {
        perror("malloc failed");
        return 1;
    }

    // Fill 8 bytes with the value 174 (0xAE)
    ft_memset(memBlock, 174, 8); 
    print_memory("Result Bytes", memBlock, 8); // Should show 'AE AE AE AE ...'

    free(memBlock);
    
    printf("---------------------------\n");
    
    return 0;
}
