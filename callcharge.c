#include<stdio.h>
int main(){
    int type,min,amt;
    scanf("%d %d",&type,&min);
    switch (type)
    {
    case 1:
        if(min>=0){
            amt=min*1;
            printf("Rs.%d",amt);
        }
        break;
    case 2:
        if(min>=0){
            amt=min*3;
            printf("Rs.%d",amt);
        }
        break;
    case 3:
       if(min>=0){
            amt=min*10;
            printf("Rs.%d",amt);
        }
        break;
    default:
        break;
    }
}