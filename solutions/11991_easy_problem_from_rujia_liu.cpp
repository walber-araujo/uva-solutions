#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define MAXN 50050
const int inf = 1e9 + 10;
typedef pair<int, int> pii;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n, m;

    while (cin >> n >> m)
    {
        vector<vector<int>> adj(1000001);

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            adj[a].pb(i + 1);
        }

        int k, v;
        for (int i = 0; i < m; i++)
        {
            cin >> k >> v;

            int size = adj[v].size();
            if (size < k)
                cout << 0 << endl;
            else
                cout << adj[v][k - 1] << endl;
        }
    }

    return 0;
}

