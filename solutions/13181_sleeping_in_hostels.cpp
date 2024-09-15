#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string line;
    while(getline(cin, line)) {
        vector<int> ocu;
        int tam = line.size();
        for (int i = 0; i < tam; i++) {
            if (line[i] == 'X') ocu.pb(i);
        }
        int ans = max(ocu[0]-1, tam-ocu[ocu.size()-1]-2);
        for (int i = 1; i < ocu.size(); i++) {
            int mid = (ocu[i] + ocu[i-1]) / 2;
            int dist = min(mid-ocu[i-1]-1, ocu[i]-mid-1);
            if (dist > ans) ans = dist;
        }
        cout << ans << endl;

    }
    return 0;
}
