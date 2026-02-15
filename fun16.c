//fibonocci series
#include<stdio.h>
int fibonocci(int next,int i,int a,int b,int n){
     for(int i=0;i<n;i++){
        printf("%d",a);
        next=a+b;
        a=b;
        b=next;

      }
      return 0;

}
int main(){
    int n;
    int next;
    int i;
    int a=0,b=1;
    scanf("%d",&n);
    fibonocci(next,i,a,b,n);
   
}

