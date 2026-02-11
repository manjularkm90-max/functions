//sum of digits
#include<stdio.h>
int digits(int n,int num,int sum){
    while(n != 0){
        num = n % 10;  
        sum = sum + num;
        n = n / 10; 
    }
    printf("%d", sum);
    return 0;

}

int main(){
    int n;
    int num;
    int sum = 0;
    scanf("%d", &n);
    digits(n,num,sum);
    return 0;
}
