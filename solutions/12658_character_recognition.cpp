#include "bits/stdc++.h"

using namespace std;

void count(int n, string line) {
    int i = 0;
    for (; i < n; i++) {
        if (line[1+3*i+i] == '*') cout << '1';
        else if (line[3*i+i] == '*') cout << '2';
        else cout << '3';
    }
    cout << endl;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int i = 0;
    string line;
    int nums[3];
    int n; cin >> n;
    cin.ignore();
    for (; i < 5; i++) {
        cin >> line;
        if (i == 3) {
            count(n, line);
        }
    }
    return 0;
}