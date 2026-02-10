#include<stdio.h>
int main(){
    int class,weight,amount;
    scanf("%d %d",&class,&weight);
    switch (class)
    {
    case 1:
        if(weight>=1){
            amount =weight*300;
            printf("Extra baggage charge Rs.%d",amount);
        }
        break;
    case 2:
       if(weight<=3){
           printf("Free");
       }
       else if(weight>3){
            amount =(weight-3)*300;
            printf("Extra baggage charge Rs.%d",amount);
        }
        break;
    default:
        break;
    }
}