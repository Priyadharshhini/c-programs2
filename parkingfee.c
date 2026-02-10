#include<stdio.h>
int main(){
    int type,numhour,amount;
    scanf("%d %d",&type,&numhour);
    switch (type)
    {
    case 1:
        if(numhour>=1){
            amount =numhour*10;
            printf("Parking fee Rs.%d",amount);
        }
        break;
    case 2:
       if(numhour>=3){
            amount =numhour*20;
            printf("Parking fee Rs.%d",amount);
        }
        break;
    default:
        break;
    }
}