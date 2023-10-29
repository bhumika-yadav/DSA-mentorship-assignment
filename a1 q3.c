#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0; 
    }
    if (n <= 3) {
        return 1; 
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    int t, n;
    printf("Enter the number of test cases (t): ");
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
    
        printf("Enter a number (n): ");
        scanf("%d", &n);

        if (isPrime(n)) {
            printf("prime\n");
        } else {
            printf("not prime\n");
        }
    }

    return 0;
}
