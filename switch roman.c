#include <stdio.h>

int main() {
    char romanChar;

    // Prompt the user to enter a Roman numeral character
    printf("Enter a Roman numeral character (I, V, X, L, C, D, M): ");
    scanf(" %c", &romanChar); // Note the space before %c to consume any leading whitespace

    // Convert the Roman numeral to its corresponding number name
    switch (romanChar) {
        case 'I':
            printf("I is one.\n");
            break;
        case 'V':
            printf("V is five.\n");
            break;
        case 'X':
            printf("X is ten.\n");
            break;
        case 'L':
            printf("L is fifty.\n");
            break;
        case 'C':
            printf("C is hundred.\n");
            break;
        case 'D':
            printf("D is five hundred.\n");
            break;
        case 'M':
            printf("M is thousand.\n");
            break;
        default:
            printf("Error: Invalid Roman numeral character. Please enter one of I, V, X, L, C, D, M.\n");
    }

    return 0;
}
