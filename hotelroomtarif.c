#include<stdio.h>
int main(){
    int roomtype;
    char season;
    scanf("%d %c",&roomtype,&season);
    switch (roomtype)
    {
    case 1:
        if(season='A'){
            printf("Rs.2500");
        }
        else if(season='B'){
            printf("Rs.2000");
        }
        break;
    case 2:
        if(season='C'){
            printf("Rs.4000");
        }
        else if(season='D'){
            printf("Rs.3000");
        }
        break;
        
    default:
        break;
    }
}