#include<stdio.h>
int main() {
    int n,p;
    int r=1;
    scanf("%d %d",&n,&p);
    for (int i=1;i<=p;i*=n) {
        r*=n;
    }
    printf("%d",r*=n);

}