#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of terms: ");
    fflush(stdout);
    scanf("%d", &n);

    long long a = 0, b = 1;

    for (int i = 1; i <= n; i++) {
        printf("%lld ", a);
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
