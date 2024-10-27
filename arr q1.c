#include <stdio.h>

void display(int marks[]);

int main() {
    int marks[5] = {99, 90, 96, 93, 95};
    display(marks);  // Correctly calling display function
    return 0;
}

void display(int marks[]) {
    for (int i = 0; i < 5; i++) {  // i < 5 instead of i <= 4 for clarity
        printf("%d\t", marks[i]);
    }
    printf("\n");
}
