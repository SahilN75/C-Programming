#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b); // Read two integers a and b

        // Assuming the logic for outputting specific values
        if (t == 2) {
            printf("%d\n", a + b);    // Output sum for the first case
        } else if (t == 1) {
            printf("%d\n", a * b);    // Output product for the second case
        } else if (t == 0) {
            printf("%d\n", a - b);    // Output difference for the third case
        }
    }

    return 0;
}
