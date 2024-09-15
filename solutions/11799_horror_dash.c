#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, v, i, j, n;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        int max = 1;
        scanf("%d", &n);

        for (j = 0; j < n; j++) {
            scanf("%d", &v);
            if (v > max) {
                max = v;
            }
        }

        printf("Case %d: %d\n", i, max);
    }

    return 0;
}