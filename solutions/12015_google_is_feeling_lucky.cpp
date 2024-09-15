#include "bits/stdc++.h"

using namespace std;

vector<string> split(string str, char delimiter) {
    string token;
    vector<string> tokens;
    istringstream strStream(str);
    while(getline(strStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t, i, j = 1;
    cin >> t;
    cin.ignore();
    string cur;
    vector<string> urls(10);
    int relevances[10];

    while(t--) {
        int max = 0;
        for (i = 0; i < 10; i++) {
            getline(cin, cur);
            vector<string> parts = split(cur, ' ');
            urls[i] = parts[0];
            relevances[i] = stoi(parts[1]);
            if (relevances[i] > max) {
                max = relevances[i];
            }
        }
        
        cout << "Case #" << j << ":" << endl;
        for (i = 0; i < 10; i++) {
            if (relevances[i] == max) {
                cout << urls[i] << endl;
            }
        }
        j++;
    }

    return 0;
}