#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);
    printf("Enter height (in cm): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);
    if (bmi < 18.5)
        printf("You are Underweight.\n");
    else if (bmi >= 18.5 && bmi <= 24.9)
        printf("You have Normal weight.\n");
    else
        printf("You are Overweight.\n");

    return 0;
}
