#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers:\n ");
    scanf("%d %d", &a, &b);

    printf("Enter operator (+, -, *, /, %%): \n ");
    scanf(" %c", &op);  

    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if (b != 0) 
                printf("Result = %d\n", a / b);
            else 
                printf("Error! Division by zero.\n");
            break;
        case '%': 
            if (b != 0) 
                printf("Result = %d\n", a % b);
            else 
                printf("Error! Modulus by zero.\n");
            break;
        default: printf("Invalid operator!\n");
    }

    return 0;
}
