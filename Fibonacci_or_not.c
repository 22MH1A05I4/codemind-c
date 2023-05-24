#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);

    int fibPrev = 0; // Previous Fibonacci number
    int fibCurr = 1; // Current Fibonacci number

    while (fibCurr < number) {
        int fibNext = fibPrev + fibCurr;
        fibPrev = fibCurr;
        fibCurr = fibNext;
    }

    if (fibCurr == number) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
