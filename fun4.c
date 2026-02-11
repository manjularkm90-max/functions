//Calculate Area of Circle Using Function
#include<stdio.h>
int circle(int r, float area){
    area=3.14*r*r;
    printf("%.2f",area);
    return 0;


}
int main(){
    int r;
    float area;
    scanf("%d",&r);
    circle(r,area);
    return 0;
}