#include <stdio.h>

int main() {
    int b, n, v1, v2, v3, i, p;
    while(1) {
        p = 1;
        scanf("%d", &b);
        scanf("%d", &n);
        if ((b == 0) && (n == 0)) break;
        int banks[b];
        
        for (i = 0; i < b; i++) {
            scanf("%d", &v1);
            banks[i] = v1;
        }
        
        while(n--) {
            scanf("%d %d %d", &v1, &v2, &v3);
            banks[v1-1] -= v3;
            banks[v2-1] += v3;
        }

        for (i = 0; i < b; i++) {
            if (banks[i] < 0) {
                p = 0;
                break;
            }
        }
        if (p) printf("S\n");
        else printf("N\n");
    }
    
    return 0;
}