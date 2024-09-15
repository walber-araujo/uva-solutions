#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
#define pb push_back

vector<int> ori;

void printAns() {
    for (int i = 1; i < ori.size(); i++) {
        if (i == 1) cout << ori[i];
        else cout << " " << ori[i];
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while (true) {
        int n; cin >> n;
        if (n == 0) return 0;

        ori.assign(n + 1, -1);
        bool possible = true;
        for (int i = 1; i <= n; i++) {
            int c, p; cin >> c >> p;
            if (!possible) continue;

            int newPos = i + p;
            if (newPos < 1 || newPos > n || ori[newPos] != -1) possible = false;
            else ori[newPos] = c;
        }

        if (possible) printAns();
        else cout << -1 << endl;
    }
}
