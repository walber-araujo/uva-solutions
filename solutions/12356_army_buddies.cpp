#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back;

vector<pair<int, int>> al;

void buildAl(int s) {
    for (int i = 1; i < s; i++) {
        al[i] = {i-1, i+1};
    }
    al[0].second = 1;
    al[s].first = s;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    while(1) {
        int s, b; cin >> s >> b;
        if (s == 0 && b == 0) return 0;
        al.assign(s+2, {0, 0});
        buildAl(s+1);
        while(b--) {
            int l, r; cin >> l >> r;

            if (al[l].first < 1) cout << "*";
            else cout << al[l].first;
            if (al[r].second > s) cout << " *" << endl;
            else cout << " " << al[r].second << endl;

            al[al[l].first].second = al[r].second;
            al[al[r].second].first = al[l].first;
        }
        cout << "-" << endl;
    }
    return 0;
}
