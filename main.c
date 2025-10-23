include <stdio.h>
#include <libft.h> 

int main() {
    char ch1 = 'a';
    char ch2 = '9';
    char ch3 = '-';
    int	n;

    n = ft_isalpha(ch1);
    printf("%d\n", n); 
    // Test 1: 'A' (Alphabetic)
    if (ft_isalpha(ch1)) {
        printf("'%c' is an alphabet.\n", ch1);
    } else {
        printf("'%c' is NOT an alphabet.\n", ch1);
    }

    printf("ch2(9)=%d\n",ft_isalpha(ch2)); 
    // Test 2: '9' (Not Alphabetic)
    if (ft_isalpha(ch2)) {
        printf("'%c' is an alphabet.\n", ch2);
    } else {
        printf("'%c' is NOT an alphabet.\n", ch2);
    }

    printf("ch3(-)=%d\n",ft_isalpha(ch3)); 
    // Test 3: '-' (Not Alphabetic)
    if (ft_isalpha(ch3)) {
        printf("'%c' is an alphabet.\n", ch3);
    } else {
        printf("'%c' is NOT an alphabet.\n", ch3);
    }

    return 0;
}
