#include <stdio.h>

int main() {
    int a, i;

    
    printf("Enter any number to print its table: ");
    scanf("%d", &a);

    printf("\nMultiplication Table of %d:\n", a);
    printf("-----------------------------\n");

    
    for(i = 1; i <= 10; i++) {
        printf(" %d\n",a * i);
    }

    return 0;
}
