//simple intrest
#include<stdio.h>
int interest(int p,int r,int t,float sI){
    sI=p*r*t/100;
    printf("%.2f",sI);


    return 0;
}
int main(){
    int p,r,t;
    float sI;
    scanf("%d%d%d",&p,&r,&t);
    interest(p,r,t,sI);
    return 0;
}