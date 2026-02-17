#include <stdio.h>
int main() {
    for (int i=1;i<=4;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d",j);
        }
        for (int k=1;k<=2*(4-i);k++) {
            printf(" ");
        }
        for (int j=i;j>=1;j--) {
            printf("%d",j);
        }
        printf("\n");
    }

}

