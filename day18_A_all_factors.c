#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a number: \n");
    scanf("%d", &n);

    printf("Factors: ");
    for (i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
