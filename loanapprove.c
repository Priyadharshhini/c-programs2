#include<stdio.h>
int main(){
    int loantype,score;
    scanf("%d %d",&loantype,&score);
    switch (loantype)
    {
    case 1:
        if(score>=700){
            printf("Approved\n");
        }
        else if(score>=650 && score<=699){
            printf("Manual Review");
        }
        break;
    case 2:
        if(score>=700){
            printf("Approved\n");
        }
        else if (score<700)
        {
            printf("Rejected");
        }
        break;
    default:
        break;
    }
}