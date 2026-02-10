#include<stdio.h>
int main(){
    int n;
    int sum=0;
    scanf("%d",&n);
    for(int i=2;i<=1000;i+=2) {
        sum+=i;
        if (i==n) {
            break;
        }
    }
    printf("%d",sum);
}