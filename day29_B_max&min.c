//Q58. Find the maximum and minimum element in an array
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number of elements:\n ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}
