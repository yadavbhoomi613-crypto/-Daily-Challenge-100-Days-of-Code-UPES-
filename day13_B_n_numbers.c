#include <stdio.h>

int main() {
    int n, i;

    printf("Enter n: \n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
