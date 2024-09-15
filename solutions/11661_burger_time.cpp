#include "bits/stdc++.h"
using namespace std;
const int inf = 10e9 + 7; 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int length, dist, d, r;
    string highway;
    while(1) {
        cin >> length;
        if (length == 0) break;
        cin.ignore();
        cin >> highway;
        dist = inf;
        d = -1, r = -1;
        for (int i =0; i < length; i++) {
            if (highway[i] == 'Z') {
                dist = 0;
                break;
            }
            if (highway[i] == 'R') {
                r = i;
                if ((d != -1) && (abs(r-d) < dist)) dist = abs(r-d);
            }
            else if (highway[i] == 'D') {
                d = i;
                if ((r != -1) && (abs(r-d) < dist)) dist = abs(r-d);
            }
        }
        cout << dist << endl;
    }

    return 0;
}