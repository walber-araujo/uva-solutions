#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050

vector<int> countingSort(vector<int>& a) {
    vector<int> b(a.size());
    int c[101] = {0};
    for (int i = 0; i < a.size(); i++) c[a[i]]++;
    for (int i = 1; i < 101; i++) c[i] += c[i-1];
    for (int i = a.size()-1; i >= 0; i--) {
        b[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }
    return b;
}

void printArray(vector<int>& a) {
    for (int i = 0; i < a.size()-1; i++) {
        if (i == 0) cout << a[i];
        else cout << " " << a[i];
    }
    cout << " " << a[a.size()-1] << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while(1) {
        int n; cin >> n;
        if (n == 0) break;
        vector<int> ages(n);
        for (int i = 0; i < n; i++) cin >> ages[i];
        ages = countingSort(ages);
        printArray(ages);
    }
    return 0;
}