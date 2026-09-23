#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The series is: ");
    
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
