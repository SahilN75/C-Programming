#include <stdio.h>
int linearSearch(int n, int key) {
    int num;
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num == key) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int n, key, result;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the key to search: ");
    scanf("%d", &key);
    result = linearSearch(n, key);
    if (result != -1) {
        printf("Key found at position %d\n", result + 1);
    } else {
        printf("Key not found.\n");
    }

    return 0;
}
