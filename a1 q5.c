#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digits in reverse order:\n");
    while (n != 0) {
        int digit = n % 10; 
        printf("%d\n", digit); 
        n /= 10; 
    }

    return 0;
}
