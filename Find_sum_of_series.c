#include <stdio.h>

double harmonicProgressionSum(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d",&n);
    double sum = harmonicProgressionSum(n);

    printf("%0.2f", sum);

}
