#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, m, b, d, other;
    int values[5] = {1, 10, 100, 1000, 10000};

    while(cin >> n >> m) {
        int dif = 0;
        while (m--) {
            cin >> b;
            cin >> d;
            for (int i = 1; i < n; i++) {
                cin >> other;
                b -= other;
            }

            int best = 0;
            if (b > d) {
                
            }    

        cout << dif << endl;
    }

    return 0;
}