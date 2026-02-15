//menu driven
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int a, b;
    char choice;
    scanf("%d %d %c", &a, &b, &choice);
    switch(choice) {
        case '+':
            printf("%d", add(a, b));
            break;
        case '-':
            printf("%d", subtract(a, b));
            break;
        case '*':
            printf("%d", multiply(a, b));
            break;
        case '/':
            if (b != 0)
                printf("%.2f", divide(a, b));
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
