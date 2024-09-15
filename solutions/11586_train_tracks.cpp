#include "bits/stdc++.h"
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    cin.ignore();
    while(t--) {
        string entry; getline(cin, entry);
        int qt = 0;
        for (int i = 0; i < entry.length(); i++) {
            if (entry[i] == 'M') qt++;
            else if (entry[i] == 'F') qt--;
            
        }
        if ((qt == 0) && (entry.length() > 3)) cout << "LOOP" << endl;
        else cout << "NO LOOP" << endl;
    }
    

    return 0;
}