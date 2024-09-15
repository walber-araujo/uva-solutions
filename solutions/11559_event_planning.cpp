#include "bits/stdc++.h"
using namespace std;

const int inf = 10e9 + 7;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, b, h, w;
    while(cin >> n >> b >> h >> w) {
        int min = inf;
        for (int i = 0; i < h; i++) {
            int price; cin >> price;
            for (int j = 0; j < w; j++) {
                int a; cin >> a;
                if (a >= n) {
                    if ((price*n) < min) min = price*n;
                }
            }
            
        }

        if (min <= b) cout << min << endl;
        else cout << "stay home" << endl;
    } 

    return 0;
}