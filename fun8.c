//reverse
#include<stdio.h>
int reverse(int n, int rev,int num){
    while(n!=0){
        num=n%10;
        rev=(rev*10)+num;
        n=n/10;
    }printf("%d",rev);
    return 0;

}
int main(){
    int n,num;
    int rev=0;
    scanf("%d",&n);
    reverse(n,rev,num);
    return 0;
}