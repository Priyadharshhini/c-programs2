#include<stdio.h>
int main(){
    int n;
    int sum=1;
    scanf("%d",&n);
    for(int i=1;i<=10;i++) {
        sum*=i;
        if (i==n) {
            break;
        }
    }
        printf("%d ",sum);

}