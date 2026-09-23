#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, orig;

    printf("Enter an integer: ");
    scanf("%d", &n);

    
    orig = n;

    
    while (n != 0) {
        remainder = n % 10;                 
        reversed = reversed * 10 + remainder;
        n /= 10;                             
    }

    if (orig == reversed) {
        printf("%d is a palindrome.\n", orig);
    } else {
        printf("%d is not a palindrome.\n", orig);
    }

    return 0;
}
