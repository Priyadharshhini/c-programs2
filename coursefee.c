#include<stdio.h>
int main(){
    int mode;
    char category;
    scanf("%d %c",&mode,&category);
    switch (mode)
    {
    case 1:
        if(category=='R'){
            printf("RS.5000");
        }
        else if(category=='S'){
            printf("Rs.3000");
        }
        break;
    case 2:
        if(category=='R'){
            printf("RS.9000");
        }
        else if(category=='S'){
            printf("Rs.7000");
        }
        break;
    default:
        break;
    }
}