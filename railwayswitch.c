#include<stdio.h>
int main(){
    int class,age,fare;
    scanf("%d %d",&class,&age);
    switch (class)
    {
    case 1:
        if(age<12){
            fare=300-(300*50/100);
            printf("Fare Rs.%d\n",fare);
        }else if(age>=60){
            fare=300-(300*33/100);
            printf("Fare Rs.%d\n",fare);
        }
        break;
    case 2:
        if(age<12){
            fare=1000-(1000*50/100);
            printf("Fare Rs.%d\n",fare);
        }else{
            printf("Fare Rs.1000\n");
        }
    break;
    default:
        break;
    }
}