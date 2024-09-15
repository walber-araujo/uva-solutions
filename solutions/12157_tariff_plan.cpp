#include <bits/stdc++.h>
using namespace std;

int calculateMileCost(vector<int>& calls) {
    int sum = 0;
    for (int call : calls) {
        sum += ((call / 30) + 1) * 10;
    }
    return sum;
}

int calculateJuiceCost(vector<int>& calls) {
    int sum = 0;
    for (int call : calls) {
        sum += ((call / 60) + 1) * 15;
    }
    return sum;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        int n; cin >> n;
        vector<int> calls(n);
        for (int j = 0; j < n; j++) cin >> calls[j];
        
        int mile = calculateMileCost(calls);
        int juice = calculateJuiceCost(calls);
        
        cout << "Case " << i << ": ";
        if (mile < juice) cout << "Mile " << mile << endl;
        else if (mile > juice) cout << "Juice " << juice << endl;
        else cout << "Mile Juice " << mile << endl;
    }
}
