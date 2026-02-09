#include<stdio.h>
int main(){
    int vtype,trip,amount;
    scanf("%d %d",&vtype,&trip);
    switch (vtype)
    {
    case  1:
        if(trip==1){
            printf("Rs.100");
        }
        else if(trip>=2){
            printf("Rs.800");
        }
        break;
    case 2:
        if(trip>=1){
        amount =trip*240;
        printf("Rs.%d",amount);
        }
        break;
    default:
        break;
    }
}