#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    scanf("%d", &n);

    // A prime number must be greater than 1
    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Check divisibility from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;  // Found a divisor
            break;
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}
