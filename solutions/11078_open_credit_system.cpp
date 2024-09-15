#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, senior = -200000, value, dif = -200000;

        scanf("%d", &n);
        while(n--) {
            scanf("%d", &value);
            if ((senior - value) > dif) {
                dif = senior - value;
            } 
            if (value > senior) {
                senior = value;
            } 
        }

        printf("%d\n", dif);
    }
    return 0;
}