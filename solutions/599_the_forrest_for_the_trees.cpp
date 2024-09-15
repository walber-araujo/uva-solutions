#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050
const int inf = 1e9+10;
typedef pair<int, int> pii;

vector<vector<int>> adj;
vector<int> visited;

void dfs(int v) {
    visited[v] = 1;
    for (int u : adj[v]) {
        if (!visited[u]) dfs(u);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    cin.ignore();

    while(n--) {
        string line;
        adj.assign(26, vector<int>());
        visited.assign(26, 0);

        while(getline(cin, line) && line[0] != '*') {
            int u = line[1] - 'A';
            int v = line[3] - 'A';
            adj[u].pb(v);
            adj[v].pb(u);
        }

        getline(cin, line);
        bitset<26> hasVertex;

        for (char c : line) {
            if (c != ',') hasVertex[c - 'A'] = 1;
        }

        int tree = 0, acorn = 0;
        for (int i = 0; i < 26; i++) {
            if (!visited[i] && hasVertex[i]) {
                if (adj[i].size()) {
                    dfs(i);
                    tree++;
                }
                else acorn++;
               
            }
        }
        cout << "There are " << tree << " tree(s) ";
        cout << "and " << acorn << " acorn(s)." << endl;
    }

    return 0;
}
