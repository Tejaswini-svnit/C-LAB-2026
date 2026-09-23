#include <stdio.h>

int main() {
    int a, reversedNum = 0, remainder;

    
    printf("Enter an integer: ");
    scanf("%d", &a);

    while (a != 0) {
        remainder = a % 10;         
        reversedNum = reversedNum * 10 + remainder;
        a/= 10;                     
    }

    printf("Reversed number = %d\n", reversedNum);

    return 0;
}
