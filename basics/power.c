#include <stdio.h>

int main(void) {
    int x, n;

    printf("Enter base x: ");
    fflush(stdout);
    scanf("%d", &x);

    printf("Enter exponent n: ");
    fflush(stdout);
    scanf("%d", &n);

    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%d ^ %d = %lld\n", x, n, result);

    return 0;
}
