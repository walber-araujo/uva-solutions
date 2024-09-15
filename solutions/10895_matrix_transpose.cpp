#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050
const int inf = 1e9+10;
typedef pair<int, int> pii;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int m, n;

    vector<vector<int>> transpose;

    while(cin >> m >> n) {
        transpose.assign(n+1, vector<int>());

        for (int i = 1; i <= m; i++) {
            int q; cin >> q;
            if (q == 0) continue;

            vector<int> cols(q);
            vector<int> values(q);
            for (int j = 0; j < q; j++) cin >> cols[j];

            for (int j = 0; j < q; j++) {
                cin >> values[j];
                transpose[cols[j]].pb(i);
                transpose[cols[j]].pb(values[j]);
            }
        }

        cout << n << " " << m << endl;
        for (int i = 1; i <= n; i++) {
            int size = transpose[i].size();
            if (size == 0) {
                cout << 0 << endl << endl;
                continue;
            }

            cout << transpose[i].size() / 2;
            for (int j = 0; j < size; j += 2) { 
                cout <<  " " << transpose[i][j];
            }

            cout << endl;
            for (int j = 1; j < size; j += 2) {
                cout << (j == 1 ? "" : " ") << transpose[i][j];
            }

            cout << endl;
        }

    }

    return 0;
}
