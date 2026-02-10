#include<stdio.h>
int main(){
    int category,vage;
    scanf("%d %d",&category,&vage);
    switch (category)
    {
    case 1:
        if(vage<=5){
            printf("Rs.1500");
        }
        else if(vage>5){
            printf("Rs.2500");
        }
        break;
    case 2:
        if(vage<=5){
            printf("Rs.4000");
        }
        else if(vage>5){
            printf("Rs.6000");
        }
        break;
    default:
        break;
    }
}