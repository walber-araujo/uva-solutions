#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<tuple<int, int, int, string>> b(n);
    string name;
    int year, month, day;
    for (int i = 0; i < n; i++) {
        cin >> name >> day >> month >> year;
        b[i] = {year, month, day, name};
    }
    
    sort(b.begin(), b.end());
    tuple<int, int, int, string> youngest;
    tuple<int, int, int, string> oldest;
    youngest = b[n-1];
    oldest = b[0];
    
    cout << get<3>(youngest) << endl;
    cout << get<3>(oldest) << endl;

    return 0;
}
