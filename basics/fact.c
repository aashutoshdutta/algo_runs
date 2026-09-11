#include <stdio.h>

int main(void){
    printf("Enter the value of n for Factortial: \n");
    fflush(stdout);

    int n;
    
    scanf("%d",&n);
    long long fact = 1;
    for (int i=n; i>=1;i--){
        fact = fact *i;
    }
    printf("factorial of %d is %lld\n",n,fact);
    return 0;
}