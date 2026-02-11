//factorial
#include<stdio.h>
int factorial(int n,int fact){
     for(int i=1;i<=n;i++){
        fact=fact*i;
    }printf("%d",fact);
    return 0;

}
int main(){
    int n;
    int fact=1;
    scanf("%d",&n);
    factorial(n,fact);
    return 0;
}