#include <stdio.h>

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;
    unsigned long long sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n + 1; ++i) {
        sum += t1;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("Sum of the Fibonacci series up to %d terms is: %llu\n", n + 1, sum);

    return 0;
}
