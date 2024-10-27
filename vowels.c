#include <stdio.h>
#include <ctype.h>

int main() {
    char input;
    int points = 0;

    // Ask the user to input a character
    printf("Enter a character: ");
    scanf("%c", &input);

    // Check if it's a vowel or number and assign points
    if (strchr("aeiouAEIOU", input))
        points = 5;   // Vowel
    else if (isdigit(input))
        points = 10;  // Number

    // Display the points scored
    printf("Points scored: %d\n", points);

    return 0;
}
