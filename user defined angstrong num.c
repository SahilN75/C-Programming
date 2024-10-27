#include <stdio.h>

int Armstrong(int n);
int power(int base, int exponent);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        if (Armstrong(number)) {
            printf("%d is an Armstrong number.\n", number);
        } else {
            printf("%d is not an Armstrong number.\n", number);
        }
    }

    return 0;
}

int Armstrong(int n) {
    int original = n, sum = 0, digits = 0;

    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n;

    while (original != 0) {
        int digit = original % 10;
        sum += power(digit, digits);
        original /= 10;
    }

    return sum == n;
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
