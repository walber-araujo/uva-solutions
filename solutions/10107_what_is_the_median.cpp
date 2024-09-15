#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back

int main() {
    cin.tie(0)->sync_with_stdio(0);
    vector<ll> arr;
    arr.reserve(10000);
    ll num, med;
    while(cin >> num) {
        arr.pb(num);
        int i = arr.size()/2;
        nth_element(arr.begin(), arr.begin() + i, arr.end());
        if (arr.size() % 2 == 0) {
            nth_element(arr.begin(), arr.begin() + i-1, arr.end());
            med = (arr[i] + arr[i-1]) / 2;
        }
        else med = arr[i];
        cout << med << endl;
    }

    return 0;
}
