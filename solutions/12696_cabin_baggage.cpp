#include "bits/stdc++.h"

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, c = 0; cin >> n;
    float length, width, depth, weight;
    while(n--) {
        cin >> length;
        cin >> width;
        cin >> depth;
        cin >> weight;

        if (((length + width + depth) <= 125.0) && (weight <= 7.0)) {
            cout << 1 << endl;
            c++;
        }
        else if ((length <= 56.0) && (width <= 45.0) && (depth <= 25.0) && (weight <= 7.0)) {
            cout << 1 << endl;
            c++;
        }
        else cout << 0 << endl; 
    }
    cout << c << endl;

    return 0;
}