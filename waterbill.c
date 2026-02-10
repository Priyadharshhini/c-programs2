#include<stdio.h>
int main(){
    int type,unit,amt;
    scanf("%d %d",&type,&unit);
    switch (type)
    {
    case 1:
        if(unit<=30){
            amt=unit*5;
            printf("Rs.%d",amt);
        }
        else if(unit>30){
            amt=unit*8;
            printf("Rs.%d",amt);
        }
        break;
    case 2:
         if(unit>=0){
            amt=unit*10;
            printf("Rs.%d",amt);
         }
        break;
    default:
       printf("not valid");
        break;
    }
}