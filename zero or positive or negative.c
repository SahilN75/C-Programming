#include <stdio.h>
 
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number %d is positive.", num);
    }else if (num < 0) {
        printf("The number %d is negative.", num);
    }else {
        printf("The number %d is zero.", num);        
    }

    return 0;
}