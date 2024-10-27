#include <stdio.h>
#include <ctype.h>  

int main() {
    char input;
    printf("Enter a letter: ");
    scanf("%c", &input);

    if (islower(input)) {
        printf("You entered a lowercase letter.\n");
    } 
    else if (isupper(input)) {
        printf("You entered an uppercase letter.\n");
    } 
    else {
        printf("The input is not a valid letter.\n");
    }

    return 0;
}
