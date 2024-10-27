#include <stdio.h>

int main() {
    char color;

    // Prompt the user to enter a traffic light color
    printf("Enter the traffic light color (R for Red, Y for Yellow, G for Green): ");
    scanf(" %c", &color); // Note the space before %c to consume any leading whitespace

    // Control the traffic light sequence using switch-case
    switch (color) {
        case 'R':
        case 'r':
            printf("Red Light: STOP!\n");
            break;
        case 'Y':
        case 'y':
            printf("Yellow Light: GET READY to STOP!\n");
            break;
        case 'G':
        case 'g':
            printf("Green Light: GO!\n");
            break;
        default:
            printf("Error: Invalid color! Please enter R, Y, or G.\n");
    }

    return 0;
}
