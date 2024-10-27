#include <stdio.h>

int main() {
    float a, b, c, discriminant;
    int points = 0;

    printf("Enter a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
        points = 20;
    else if (discriminant < 0)
        points = 10;
    printf("Points: %d", points);

    return 0;
}
