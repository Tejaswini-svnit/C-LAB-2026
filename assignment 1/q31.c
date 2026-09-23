#include <stdio.h>

int main() {
    int num, rem, sum = 0;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    int original_num = num;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        rem = num % 10;   
        sum = sum + rem;  
        num = num / 10;         
    }

    printf("The sum of the individual digits of %d is: %d\n", original_num, sum);

    return 0;
}
