//power
#include<stdio.h>
#include<math.h>
int power(int a, int b) {
    int result = pow(a, b);
    printf("%d",result);
    return result;
}
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    power(a,b);
    return 0;
}
