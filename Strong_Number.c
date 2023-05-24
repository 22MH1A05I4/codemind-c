#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);
    int originalNumber = number;

    int sum = 0;
    int temp;

    while (number != 0) {
        int digit = number % 10;
        temp = 1;

        for (int i = 1; i <= digit; i++) {
            temp *= i;
        }

        sum += temp;
        number /= 10;
    }

    if (sum == originalNumber) {
        printf("The number %d is a strong number", originalNumber);
    } else {
        printf("The number %d is not a strong number", originalNumber);
    }

    return 0;
}
