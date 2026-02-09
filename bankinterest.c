#include<stdio.h>
int main(){
    int accounttype,year;
    scanf("%d %d",&accounttype,&year);
    switch (accounttype)
    {
    case 1:
        int a=4;
        printf("interest %dpercent\n",a);
    break;
    case 2:
        if(year<=3){
            int b=5;
            printf("interest %dpercent\n",b);
        }else {
            int c=7;
            printf("interest %dpercent\n",c);
        }
    break;
    default:
        break;
    }
}