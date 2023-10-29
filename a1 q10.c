#include <stdio.h>

void primeFactorization(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factorization of %d: ", n);
    primeFactorization(n);
    printf("\n");

    return 0;
}
