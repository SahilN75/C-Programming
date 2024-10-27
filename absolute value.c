#include <stdio.h>

// Function to print the absolute value of x
void printAbsoluteValue(int x) {
    if (x < 0) {
        x = -x; // Make x positive if it's negative
    }
    printf("The absolute value is: %d\n", x);
}

int main() {
    int number;

    // Read an integer in main
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function to print the absolute value
    printAbsoluteValue(number);

    return 0;
}
