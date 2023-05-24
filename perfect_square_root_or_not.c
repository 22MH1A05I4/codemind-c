#include <stdio.h>

int main() {
    int number;
    scanf("%d",&number);

    int i = 0;
    while (i * i <= number) {
        if (i * i == number) {
            printf("True");
            return 0;
        }
        i++;
    }

    printf("False");

}
