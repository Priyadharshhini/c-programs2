#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=1000;i++) {
        if (i==n+1) {
            break;
        }
        printf("%d ",i);
    }
}