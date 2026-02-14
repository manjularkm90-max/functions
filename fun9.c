//palindrom
#include<stdio.h>
void palindrom(int n,int num,int rev,int original,int i){
    original =n;
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
int main(){
    int n;
    int rev=0;
    int num;
    int i=0;
    int original;
    scanf("%d",&n);
    palindrom(n,num,rev,original,i);
    return 0;
}