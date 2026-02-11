#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int first=0;
    int second=1;
    if (1<=n) {
        printf("%d ",first);
    }
    if (2<=n) {
        printf("%d ",second);
    }
    for (int i=1;i<=20;i++) {
        int temp=first+second;
        first=second;
        second=temp;
        if (temp==n) {
            break;
        }
        printf(" %d ",temp);
    }
}