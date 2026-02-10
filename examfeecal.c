#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch (type)
    {
    case 1:
            printf("Rs.1200");
        break;
    case 2:
            printf("Rs.800");
        break;
    case 3:
            printf("Rs.500");
        break;
    default:
        break;
    }
}