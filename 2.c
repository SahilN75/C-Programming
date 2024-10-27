#include <stdio.h>
int num;
void display() {
    int i;
    for (i = 1; i <= num; i++) {
        printf("num = %d\n", i);
    }
}
int main() {
    printf("Enter a number: ");
    scanf("%d", &num);  
    display();
    return 0;
}
