#include "bits/stdc++.h"
using namespace std;

int getInversion(const string& str) {
    int qtInv = 0;
    for (int i = 0; i < str.size(); i++) {
        for (int j = i + 1; j < str.size(); j++) {
            if (str[i] > str[j]) qtInv++;
        }
    }
    return qtInv;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int M;
    cin >> M;
    bool firstCase = true;

    while (M--) {
        if (!firstCase) {
            cout << '\n';
        }
        firstCase = false;

        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> result(m);
        vector<string> strs(m);
        for (int i = 0; i < m; i++) {
            string str; cin >> str;
            strs[i] = str;
            int qtInv = getInversion(str);
            result[i] = {qtInv, i};
        }
        stable_sort(result.begin(), result.end());

        for (const auto& [inv, i] : result) {
            cout << strs[i] << '\n';
        }
    }

    return 0;
}
