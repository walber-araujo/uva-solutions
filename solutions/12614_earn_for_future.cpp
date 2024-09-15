#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    for (int i = 1; i <= t; i++){
        int n; cin >> n;
        int max = -1;
        int value;
        while(n--) {
            cin >> value;
            if (value > max) max = value;
        }

        cout << "Case " << i << ": " << max << endl;
        
    }

    return 0;
}