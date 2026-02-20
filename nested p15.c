#include<stdio.h>
int main() {
    int num='A';
    for (int i=0;i<=3;i++) {
       for (int j=0;j<=i;j++) {
           printf("%c",num);
           num++;
       } printf("\n");
    }
}