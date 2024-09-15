#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, i, atual, anterior, n, j;
    scanf("%d", &t);

    for (i = 1; i <= t; i++) {
        int alto = 0, baixo = 0;
        scanf("%d", &n);
        scanf("%d", &anterior);

        for(j = 1; j < n; j++) {
            scanf("%d", &atual);
            if (anterior < atual) {
                alto++;
            } else if (anterior > atual) {
                baixo++;
            }
            anterior = atual;
        }
        
    printf("Case %d: %d %d\n", i, alto, baixo);
    }

    return 0;
}