#include <stdio.h>

int main() {
    int N, i, max, min;
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Please enter a valid number of elements greater than 0.\n");
        return 1;
    }
    int arr[N]; 
    printf("Enter %d numbers:\n", N);
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

    for(i = 1; i < N; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    printf("\nMaximum number = %d\n", max);
    printf("Minimum number = %d\n", min);

    return 0;
}
