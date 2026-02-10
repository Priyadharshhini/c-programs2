#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=100;i++) {
        i==n-i+1;
        printf("%d ",n-i+1);
        if (i==n) {
            break;
        }
    }
}