#include <stdio.h>

// Function prototype
long long factorial(int n);

int main() {
    int number;
    long long result;

    // Prompt the user to enter a number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check for valid input
    if (number < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using the user-defined function
        result = factorial(number);
        
        // Display the result
        printf("Factorial of %d is %lld\n", number, result);
    }

    return 0;
}

// Function definition to calculate factorial
long long factorial(int n) {
    // Base case
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive call
    }
}
