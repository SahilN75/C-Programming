#include <stdio.h>

float sumofseries(int x, int n);
int factorial(int num);

int main() {
    int x, n;

    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    float result = sumofseries(x, n);
    printf("The sum of the series is: %.2f\n", result);

    return 0;
}

float sumofseries(int x, int n) {
    float sum = 1.0; // Start with the first term of the series

    for (int i = 1; i <= n; i++) {
        sum += (float)power(x, i) / factorial(i);
    }

    return sum;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    
    int fact = 1;
    for (int i = 2; i <= num; i++) {
        fact *= i;
    }

    return fact;
}

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}
