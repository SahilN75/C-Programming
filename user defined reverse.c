#include <stdio.h>

// Function prototype
int reverseNumber(int n);

int main() {
    int number, reversed;

    // Prompt the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the reverseNumber function to reverse the input number
    reversed = reverseNumber(number);

    // Display the reversed number
    printf("Reversed Number: %d\n", reversed);

    return 0;
}

// Function definition to reverse the number
int reverseNumber(int n) {
    int reversed = 0;

    // Process to reverse the number
    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Shift the reversed number and add the digit
        n /= 10; // Remove the last digit from n
    }

    return reversed;
}
