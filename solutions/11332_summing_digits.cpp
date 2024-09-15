#include <stdio.h>

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum >= 10) {
        sum = sumDigits(sum);
    }
    return sum;
}

int main() {
    int n;
    while(1) {
        scanf("%d", &n);
        if (n == 0) break;
        printf("%d\n", sumDigits(n));
    }

    return 0;
}