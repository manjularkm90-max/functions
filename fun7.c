#include<stdio.h>
int primeno(int n,int prime,int i){
    if(n>=1){
        prime=1;
    }for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }if(prime==1){
        printf("prime");
    }else{
        printf("not prime");
    }
    return 0;

}
int main(){
    int n,i,prime;
    scanf("%d",&n);
    primeno(n,prime,i);
    return 0;

    
}