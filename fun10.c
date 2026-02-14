//sum of n natural numbers
#include<stdio.h>
int num(int n,int i,int sum){
     for(int i=1;i<=n;i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("sum:%d\n",sum);
    return 0;

}
int main(){
    int n;
    int i;
    int sum=0;
    scanf("%d",&n);
    num(n,i,sum);
    return 0;
}