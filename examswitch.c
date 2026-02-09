#include<stdio.h>
int main(){
    int mark,attendance;
    scanf("%d %d",&mark,&attendance);
    if(mark>=75){
        printf("Distinction");
    }
    else if(mark>=50 && mark<=74){
        printf("Pass");
    }
    else if(attendance<75||mark<50){
        printf("Fail");
    }
    return 0;
}