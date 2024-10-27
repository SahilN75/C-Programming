#include <stdio.h>

// Function prototype
int isPrime(int n);

int main() {
    int number;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for valid input
    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        // Call the isPrime function and display the result
        if (isPrime(number)) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}

// Function definition to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    // Check for factors from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // n is divisible by i, so it's not prime
        }
    }

    return 1; // n is prime
}
