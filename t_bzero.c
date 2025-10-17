#include <stdio.h>
#include <string.h> // For size_t and comparison functions (optional)
#include <stdlib.h> // For malloc and free

// Use your custom header for your function
#include "libft.h" 

// NOTE: Ensure your libft.h contains the prototype: 
// void ft_bzero(void *s, size_t n);

/**
 * Helper function to print a block of memory in hexadecimal.
 * This is crucial for verifying that all bytes are set to 0x00.
 */
void print_memory(const char *label, const void *ptr, size_t size) {
    const unsigned char *p = ptr;
    size_t i;
    printf("  %s (%zu bytes): ", label, size);
    for (i = 0; i < size; i++) {
        printf("%02X ", p[i]);
    }
    printf("\n");
}

int main(void) {
    printf("--- Testing ft_bzero() ---\n");
    
    // Size of the memory block to test
    const size_t TEST_SIZE = 16;
    
    // Allocate memory on the heap
    char *memBlock = (char *)malloc(TEST_SIZE); 
    
    if (memBlock == NULL) {
        perror("malloc failed");
        return 1;
    }

    // --- Step 1: Initialize memory to a non-zero value ---
    // Using memset to ensure the block is NOT zeroed initially (e.g., fill with 'A' / 0x41)
    memset(memBlock, 'A', TEST_SIZE); 
    printf("\n-- Before ft_bzero --\n");
    print_memory("Initial State", memBlock, TEST_SIZE);
    
    // --- Step 2: Call ft_bzero on a portion of the memory ---
    const size_t ZERO_LEN = 10;
    
    printf("\n-- Calling ft_bzero on the first %zu bytes --\n", ZERO_LEN);
    ft_bzero(memBlock, ZERO_LEN); 

    // --- Step 3: Verify the result ---
    printf("\n-- After ft_bzero --\n");
    print_memory("Final State", memBlock, TEST_SIZE);
    
    // Expected Output: The first 10 bytes should be '00' and the last 6 bytes should still be '41'.

    // --- Test 2: Edge Case (Zero length) ---
    printf("\n-- Test 2: Zero length (Should do nothing) --\n");
    char edge_case[5];
    memset(edge_case, 0xFF, 5); // Fill with 0xFF
    print_memory("Before 0-len", edge_case, 5);
    ft_bzero(edge_case, 0); // Call bzero with length 0
    print_memory("After 0-len", edge_case, 5); // Should remain 0xFF 0xFF ...

    free(memBlock);
    printf("---------------------------\n");
    
    return 0;
}
