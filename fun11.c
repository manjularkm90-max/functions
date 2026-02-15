//digit counter
#include<stdio.h>
int digit(int i,int n,int num,int count){
    count =0;
     for(int i=n;n!=0;n=n/10){
        num=n%10;
        count++;

    }
    printf("%d",count);
    return 0;

}
int main(){
    int n;
    int num;
    int i;
    int count;
    scanf("%d",&n);
    digit(i,n,num,count);
    return 0;
}
