#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int inverse = 0;
    int position = 1;

    while (n > 0) {
        int digit = n % 10;
        int invertedDigit = position;

        inverse = inverse + (invertedDigit * pow(10, digit - 1));
        n = n / 10;
        position++;
    }

    printf("Inverse of the number: %d\n", inverse);

    return 0;
}
