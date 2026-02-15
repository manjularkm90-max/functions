//leap year
#include<stdio.h>
int leapyear(int year){
    if(((year%400==0||year%100!=0))&&(year%4==0)){
        printf("leap year");

    }
    else{
        printf("not leap year");
    }
    return 0;

}
int main(){
    int year;
    scanf("%d",&year);
    leapyear(year);
    return 0;

}