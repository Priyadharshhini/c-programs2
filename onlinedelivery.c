#include<stdio.h>
int main(){
    int speedtype,amount;
    scanf("%d %d",&amount,&speedtype);
    switch (speedtype)
    {
    case 1:
        printf("Delivary Rs.50");
    break;
    case 2:
        if(amount<1000){
            printf("Delivary Rs.100");
        }
        else if(amount>=1000){
            printf("Delivary Free");
        }
    break;
    default:
        break;
    }
}