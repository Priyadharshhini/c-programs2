#include<stdio.h>
int main(){
    int unittype,unit;
    scanf("%d %d",&unit,&unittype);
    switch (unittype)
    {
    case 1:
      if(unit<=100){
       int amount=3;
       int total=unit*amount;
       printf("Bill Rs.%d",total);
      }
       else if(unit>100){
       int amount=5;
       int total=unit*amount;
       printf("Bill Rs.%d",total);
       }
    break;
    case 2:
      if(unit<=100){
        int amount=7;
        int total=unit*amount;
        printf("Bill Rs.%d",total);
      }
      else if(unit>100){
        int amount=10;
        int total=unit*amount;
        printf("Bill Rs.%d",total);
      }
    break;
    default:
      break;

    }
}