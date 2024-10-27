#include <stdio.h>

int isPerfect(int n);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        if (isPerfect(number)) {
            printf("%d is a perfect number.\n", number);
        } else {
            printf("%d is not a perfect number.\n", number);
        }
    }

    return 0;
}

int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return sum == n;
}
