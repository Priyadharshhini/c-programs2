#include<stdio.h>
int main(){
    int actype,balance,withdraw;
    scanf("%d %d %d",&actype,&balance,&withdraw);
    switch (actype)
    {
    case 1:
        if(balance>=withdraw){
            printf("Transaction successfull");
        }
        break;
    case 2:
        if(withdraw<=5000){
            printf("Limit Exceeded");
        }
        break;
    default:
        break;
    }
}