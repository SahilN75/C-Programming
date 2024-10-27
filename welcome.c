#include <stdio.h>

int welcome();

int main() {
    printf("Before Welcome\n");
    welcome();
    printf("After Welcome\n");
}

int welcome() { 
    printf("Welcome to C\n");
    return 0;
}
