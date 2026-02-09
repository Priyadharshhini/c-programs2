#include<stdio.h>
int main(){
    int code,experience,salary,totalsalary;
    scanf("%d %d",&code,&experience);
    switch (code)
    {
    case 1:
        if(experience>=3){
            salary=50000;
            int bonus=experience*5000;
            totalsalary=salary+bonus;
            printf("Rs.%d\n",totalsalary);
        }else
        {
          printf("Rs.50000\n");
        }
        break;
    case 2:
        if(experience>=3){
            salary=35000;
            int bonus=experience*5000;
            totalsalary=salary+bonus;
            printf("Rs.%d\n",totalsalary);
        }else
        {
          printf("Rs.35000\n");
        }
        break;

        
    default:
        break;
    }
}