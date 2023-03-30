#include <stdio.h>

int main() {
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        if (digit == 7) {
            count++;
        }
        num /= 10;
    }

    printf("The number of 7's in the given number is: %d", count);

    return 0;
}