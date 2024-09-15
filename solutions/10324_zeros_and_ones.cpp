#include "bits/stdc++.h"
using namespace std;

void popularArr(int* arr, int tam, string str) {
    for (int i = 0; i < tam; i++) {
        if (str[i] == '1') arr[i+1] += arr[i]+1;
        else arr[i+1] = arr[i];
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string str;
    int j = 1;
    while (getline(cin, str)) {
        if (str == "") break;
        cout << "Case " << j << ":" << endl;
        int tam = str.length();
        int arr[tam+1] = {0};
        popularArr(arr, tam, str);
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            int j, k; cin >> j >> k;
            if (j > k) swap(j, k);
            int x = arr[k+1] - arr[j];
            if ((x == (k-j+1)) || (x == 0)) {
                cout << "Yes" << endl;
            }
            else if (k == j) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        j++;
        cin.ignore();

    }
    

}