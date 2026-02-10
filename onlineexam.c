#include<stdio.h>
int main(){
    int attempt,mark;
    scanf("%d %d",&attempt,&mark);
    switch (attempt)
    {
    case 1:
        if(mark>=80){
            printf("Excellent");
        }
        break;
    case 2:
       if(mark>=60){
           printf("Good");
       }
        break;
    case 3:
       printf("Need Improvement");
       break;
    default:
       printf("not valid");
        break;
    }
}