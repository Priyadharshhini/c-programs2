#include<stdio.h>
int  main() {
    int n;
    int sum=0;
    scanf("%d",&n);
    for (int i=1;i<=1000;i++) {
        sum+=i;
        if (i==n) {
            break;
        }
    }
    printf("%d\n",sum);
}
