//Check Even or Odd Using Function
#include<stdio.h>
int num(int i){
        if(i%2==0){
            printf("even");
        }
        else{
            printf("odd");
        }
    return 0;
}
int main(){
    int i;
    scanf("%d",&i);
    num(i);
    return 0;
}