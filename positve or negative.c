#include <stdio.h>

int main() {
    int num;
    
    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check if the number is positive or negative
    if (num >= 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }
    
    return 0;
}
