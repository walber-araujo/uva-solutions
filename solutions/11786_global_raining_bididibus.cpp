#include "bits/stdc++.h"
using namespace std;

int count(string str, int n) {
    vector<int> stack;
    int answer = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '\\') {
            stack.push_back(i);
        }
        if (stack.size() && str[i] == '/') {
            answer += i - stack.back();
            stack.pop_back();
        }
    }
    return answer;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    string entry;
    while(t--) {
        cin >> entry;
        int n =entry.length();
        cout << count(entry, n) << endl;
    }

    return 0;
}