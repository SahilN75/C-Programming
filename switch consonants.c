#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter an uppercase character
    printf("Enter an uppercase character: ");
    scanf("%c", &ch);

    // Check if the character is an uppercase letter
    if (ch >= 'A' && ch <= 'Z') {
        // Check if the character is a vowel
        switch (ch) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", ch);
                break;
            default:
                printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Error: Please enter an uppercase character (A-Z).\n");
    }

    return 0;
}
