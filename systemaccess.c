#include<stdio.h>
int main(){
    int role,logintime;
    scanf("%d %d",&role,&logintime);
    switch (role)
    {
    case 1:
        printf("full access time");
        break;
    case 2:
         if(logintime>=9 && logintime<=18){
            printf("limited access");
         }
         else{
            printf("access denied");
         }
        break;
    default:
        break;
    }
}