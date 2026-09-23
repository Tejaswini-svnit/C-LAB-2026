#include <stdio.h>

int main() {
    float base;
    int exponent, i;
    float result = 1.0; 

   printf("Enter base ");
    scanf("%f", &base);
    printf("Enter exponent ");
    scanf("%d", &exponent);

    if (exponent > 0) {

        for (i = 1; i <= exponent; ++i) {
            result = result * base;
        }
    }
    else if (exponent < 0) {
    
        for (i = 1; i <= -exponent; ++i) {
            result = result * base;
        }
    
        result = 1.0 / result;
    }
    
    else {
        result = 1.0;
    }
    
    printf("%.2f raised to the power of %d = %.4f\n", base, exponent, result);

    return 0;
}
