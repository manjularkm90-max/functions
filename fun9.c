//palindrom
#include<stdio.h>
int main(){
    int n;
    int rev=0;
    int num;
    scanf("%d",&n);
    int i=0;
    int original=n;
    while(n!=0){
        num=n%10;
        rev=(rev*10)+num;
        n=n/10;
    }
    if(rev==original){
        printf("palindrom");
    }else{
        printf("not palindrom");
    }
}