#include<stdio.h>
int main(){
    int plantype;
    float datause;
    scanf("%d %f",&plantype,&datause);
    switch (plantype)
    {
    case 1:
        if(datause<=1){
            printf("Normal speed");
        }else if(datause>1){
            printf("speed reduse");
        }
        break;
    case 2:
        if(datause<=2){
            printf("Normal speed");
        }else{
            printf("Extra charge apply");
        }
        break;

    default:
        break;
    }
}