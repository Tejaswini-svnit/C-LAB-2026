#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        int fact = 1;
        for (i = 1; i <= n; ++i) {
            fact = fact * i; 
        }

        printf("Factorial of %d = %d\n", n, fact);
    }

    return 0;
}
