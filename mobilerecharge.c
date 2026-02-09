#include<stdio.h>
int main(){
    int plan,paymentmode,pay;
    scanf("%d %d",&plan,&paymentmode);
    switch (plan)
    {
    case 1:
        if(paymentmode=11||12){
            pay=199-20;
            printf("Pay Rs.%d",pay);
        }
        else if(paymentmode=13){
            printf("Pay Rs.199");
        }
    break;
    case 2:
        if(paymentmode=11||12){
            pay=399-20;
            printf("Pay Rs.%d",pay);
        }else if(paymentmode=13){
            printf("Pay Rs.399");
        }
    break;
    default:
        break;
    }
}