#include "bits/stdc++.h"

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a, c;
    while (cin >> a >> c) {
        if ((a == 0) && (c == 0)) break;
        int ini[c];
        int qtd = 0;
        for (int i = 0; i < c; i++) {
            cin >> ini[i];
        }
        int count = 0; 
        for (int i = 0; i < c; i++) {
            if (ini[i] != a) {
                if (i == 0) count += a - ini[i];
                else if (ini[i-1] > ini[i]) count += ini[i-1] - ini[i];
            }
        }
        cout << count << endl;

    }
    return 0;
}

