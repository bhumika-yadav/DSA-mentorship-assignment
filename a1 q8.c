#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int n, k;

    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter the rotation count (k): ");
    scanf("%d", &k);

    int numDigits = countDigits(n);

    if (numDigits != 0) {
        k = k % numDigits;
    }

    if (k < 0) {
        k = numDigits + k;
    }

    int rotatedNumber = 0;
    int multiplier = 1;

    for (int i = 0; i < k; i++) {
        int lastDigit = n % 10;
        rotatedNumber += lastDigit * multiplier;
        n /= 10;
        multiplier *= 10;
    }

    rotatedNumber = rotatedNumber * (multiplier * 10) + n;

    printf("Rotated number: %d\n", rotatedNumber);

    return 0;
}
