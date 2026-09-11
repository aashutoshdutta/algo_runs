#include <stdio.h>

int main(void){
    printf("Testing for 2D loop");
    int n=5;
    for (int i=0;i<n;i++){
        printf("outerloop\n");
        for(int j=0;j<=i;j++){
            printf("*");
        }
    }
    return 0;
}