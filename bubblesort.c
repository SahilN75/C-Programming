#include <stdio.h>
void bubbleSort(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main() {
    int x, y, z;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &x, &y, &z);
    bubbleSort(&x, &y, &z);
    printf("Sorted integers: %d %d %d\n", x, y, z);

    return 0;
}
