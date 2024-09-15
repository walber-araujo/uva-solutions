#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; 
    while(cin >> n) {
        int ans;
        int i, j; cin >> i >> j;
        for (int k = 1; k <= n; k++) {
            i = (i+1) / 2;
            j = (j+1) / 2;
            ans = k;
            if (i == j) break;
        }
        cout << ans << endl;
    }
    return 0;
}