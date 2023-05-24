#include <stdio.h>

// Function to check if a number is abundant
int isAbundant(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    
    return sum > number;
}

int main() {
    int number;

   
    scanf("%d", &number);

    if (isAbundant(number)) {
        printf("True");
    } else {
        printf("False");
    }
}

   
