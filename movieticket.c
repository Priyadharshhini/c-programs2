#include<stdio.h>
int main(){
    int type,time;
    scanf("%d %d",&type,&time);
    switch (type)
    {
    case 1:
        if(time>=18){
            printf("Ticket price Rs.200");
        }
        else{
            printf("Ticket price Rs.150");
        }
        break;
    case 2:
       if(time>=18){
            printf("Ticket price Rs.300");
        }
        else{
            printf("Ticket price Rs.250");
        }
        break;
    default:
       printf("not valid");
        break;
    }
}