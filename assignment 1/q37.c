#include <stdio.h>

int main() {
    int i, N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("The series is: ");
    
    for(i = 2; i <= N; i += 2) {
        printf("%d", i);
        
        if(i < N && i + 2 <= N) {
            printf(", ");
        }
    }
    
    printf("\n");
    return 0;
}
