#include <stdio.h>
#include <math.h>

long decimalToBinary(int decimalnum) {
    long binarynum = 0;
    int rem, temp = 1;
    while (decimalnum != 0) {
        rem = decimalnum % 2;
        decimalnum = decimalnum / 2;
        binarynum = binarynum + rem * temp;
        temp = temp * 10;
    }
    return binarynum;  // Return the binary number
}

int main() {
    int decimalnum;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalnum);

    printf("Binary representation: %ld\n", decimalToBinary(decimalnum));
    return 0;
}
