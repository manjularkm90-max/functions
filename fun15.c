//multiplication
#include<stdio.h>
int multiplication(int n,int i,int pro){

      for(int i=1;i<=10;i++){
        pro=n*i;
        printf("%d\n",pro);

    }return 0;

}
int main(){
    int n;
    int pro;
    int i;
    scanf("%d",&n);
    multiplication(n,i,pro);
    return 0;
  
}