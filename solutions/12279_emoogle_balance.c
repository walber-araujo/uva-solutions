#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, x, count = 1, balance;
    while(1) {

        balance = 0;
        scanf("%d", &n);

        if (n == 0) break;

        while(n--) {
            scanf("%d", &x);
            if (x >= 1 && x <= 99) {
                balance++;
            } else if (x == 0) {
                balance--;
            }
        }

        printf("Case %d: %d\n", count, balance);
        count++;
    }
    
    return 0;
}