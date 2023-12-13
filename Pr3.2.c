#include <stdio.h>

main() {
    int n, count = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0) {
        n /= 10;
        count++;
    }

    printf("Total number of digits: %d\n", count);
}

