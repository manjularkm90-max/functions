//armstrong number
#include <stdio.h>
#include <math.h>
int armstrong(int n) {
    int original = n;
    int remainder, digits = 0;
    int sum = 0;
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

    temp = n;
    while (temp != 0) {
        remainder = temp % 10;
        sum = sum + (int)pow(remainder, digits);
        temp = temp / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    if (armstrong(n))
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}

