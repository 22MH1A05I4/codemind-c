#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int count_primes(int start, int end) {
    int count = 0;
    for (int num = start; num <= end; num++) {
        if (is_prime(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    int start,end;
    scanf("%d %d",&start,&end);
    int prime_count = count_primes(start, end);
    printf("%d",prime_count);

    return 0;
}
