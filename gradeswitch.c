#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    switch (mark/10)
    {
    case 1:
        if(91-100){
            printf("Grade A");
        }
    break;
    case 2:
       if(81-90){
           printf("Grade B");
       }
    break;
    case 3:
       if(71-80){
           printf("Grade C");
       }
    break;
    case 4:
        if(61-70){
           printf("Grade D");
        }
    break;
    case 5:
        if(51-60){
            printf("Grade E");
        }
    break;
    case 6:
        if(41-50){
            printf("Grade F");
        }
    break;
    case 7:
        if(31-40){
            printf("Supplementay");
        }
    break;
    case 8:
        if(mark<30){
            printf("Fail");
        }
    break;
    default:
        break;
    }
}