#include <stdio.h>
#include <limits.h> 
int main() {
    int n, i;
    printf("Enter the number of elements (N): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Error: Please enter a valid number of elements (at least 2).\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > max1) {
            
            max2 = max1;
            
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }
    printf("\nMaximum value: %d\n", max1);
    if (max2 == INT_MIN) {
        printf("Second Maximum value: Does not exist (all elements are identical)\n");
    } else {
        printf("Second Maximum value: %d\n", max2);
    }
return 0;
}
