#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=20;i/=1) {
        if (i/n!=0) {
            n=n/i;
        }
    }
        printf("%d",n);
}