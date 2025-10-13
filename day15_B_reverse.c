#include <stdio.h>

int main() {
    int n, reversed = 0, digit;

    printf("Enter a number to reverse:\n ");
    scanf("%d", &n);

    while(n != 0) {
        digit = n % 10;            
        reversed = reversed * 10 + digit;  
        n = n / 10;                
    }

    printf("Reversed number = %d\n", reversed);
    return 0;
}

