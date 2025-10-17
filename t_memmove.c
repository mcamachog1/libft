#include <stdio.h>
#include <string.h>  // For memset, size_t, and comparison
#include "libft.h"   // Use your custom header

// NOTE: Ensure your libft.h contains the prototype: 
// void *ft_memmove(void *dst, const void *src, size_t n);

#define TEST_SIZE 12

/**
 * Helper function to print the memory block's content.
 */
void print_buffer(const char *label, const char *buf, size_t size) {
    printf("  %s: \"%.*s\" (Bytes: ", label, (int)size, buf);
    for (size_t i = 0; i < size; i++) {
        printf("%02X ", (unsigned char)buf[i]);
    }
    printf(")\n");
}

/**
 * Runs a single memmove test case and compares the result.
 */
void run_memmove_test(const char *scenario, char *buffer, size_t dst_idx, size_t src_idx, size_t len) {
    char original_buffer[TEST_SIZE];
    
    // Copy the current state of the buffer to reset it later
    memcpy(original_buffer, buffer, TEST_SIZE);

    printf("\n--- SCENARIO: %s ---\n", scenario);
    printf("  Action: Copy %zu bytes from index %zu to index %zu\n", len, src_idx, dst_idx);
    print_buffer("Initial Buffer", buffer, TEST_SIZE);

    // --- 1. Test ft_memmove ---
    memmove(buffer + dst_idx, buffer + src_idx, len);
    print_buffer("ft_memmove Result", buffer, TEST_SIZE);

    // --- 2. Verification (Reset and compare with standard memmove) ---
    char standard_result[TEST_SIZE];
    memcpy(standard_result, original_buffer, TEST_SIZE);
    
    // Reset buffer to its original state before standard memmove
    memcpy(buffer, original_buffer, TEST_SIZE); 
    
    // Perform standard memmove for comparison
    memmove(standard_result + dst_idx, standard_result + src_idx, len);

    // Compare results
    if (memcmp(buffer, standard_result, TEST_SIZE) == 0) {
        printf("  VERIFICATION: SUCCESS ✅ (Matches standard memmove)\n");
    } else {
        printf("  VERIFICATION: FAILED ❌ (Result differs from standard)\n");
    }
    
    // Restore the buffer to the original state for the next test
    memcpy(buffer, original_buffer, TEST_SIZE);
}


int main(void) {
    char data[TEST_SIZE];
    
    // Initialize the test buffer with distinct bytes (A, B, C, ...)
    for (int i = 0; i < TEST_SIZE; i++) {
        data[i] = 'A' + i;
    }
    
    printf("--- Testing ft_memmove() Capabilities ---\n");
    
    // SCENARIO 1: Non-Overlapping Copy (Same as memcpy)
    // Copy 5 bytes from index 0 to index 7 (A,B,C,D,E to H,I,J,K,L)
    run_memmove_test("1. Non-Overlapping Copy", data, 7, 0, 5);
    
    // SCENARIO 2: Overlap - Destination BEFORE Source (Front-to-back copy needed)
    // Copy 5 bytes from index 3 to index 0 (D,E,F,G,H to A,B,C,D,E)
    // Dst: [A B C D E F G H I J K L]
    // Src: [D E F G H]
    run_memmove_test("2. Overlap (Dst < Src) - Front-to-Back", data, 0, 3, 5);

    // SCENARIO 3: Overlap - Destination AFTER Source (Back-to-back copy needed)
    // Copy 5 bytes from index 0 to index 3 (A,B,C,D,E to D,E,F,G,H)
    // Dst: [D E F G H I J K L]
    // Src: [A B C D E]
    run_memmove_test("3. Overlap (Dst > Src) - Back-to-Front", data, 3, 0, 5);

    // SCENARIO 4: Edge Case - Copy zero bytes
    run_memmove_test("4. Edge Case: Copy 0 bytes", data, 5, 0, 0);

    // SCENARIO 5: Edge Case - Copy entire buffer
    run_memmove_test("5. Edge Case: Copy all bytes (0 to 0)", data, 0, 0, TEST_SIZE);

    printf("\n-----------------------------------------\n");
    return (0);
}
