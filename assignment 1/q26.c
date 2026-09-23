#include <stdio.h>

int main() {
    int i, n;
    int sumEven = 0;
    int sumOdd = 0;

    
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i; 
        } else {
            sumOdd += i;  
        }
    }

    
    printf("\nSum of all Even numbers between 1 and %d = %d", n, sumEven);
    printf("\nSum of all Odd numbers between 1 and %d = %d\n", n, sumOdd);

    return 0;
}
