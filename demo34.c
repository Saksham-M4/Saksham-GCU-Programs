#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    printf("Enter an expression (example: 5+3): ");
    scanf("%f%c%f", &num1, &op, &num2);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
