#include "bits/stdc++.h"
using namespace std;

int merge(vector<int> &a, int ini, int mid, int fim) {
    int inversoes = 0;
    vector<int> aux(fim - ini + 1);
    
    for (int i = ini; i <= fim; i++) {
        aux[i - ini] = a[i];
    }
    
    int i = 0, j = mid - ini + 1, k = ini;
    
    while (i <= mid - ini && j <= fim - ini) {
        if (aux[i] <= aux[j]) a[k++] = aux[i++];
        else {
            inversoes += (mid - ini + 1 - i); 
            a[k++] = aux[j++];
        }
    }

    while (i <= mid - ini) {
        a[k++] = aux[i++];
    }

    while (j <= fim - ini) {
        a[k++] = aux[j++];
    }

    return inversoes;
}

int mergeSort(vector<int> &a, int ini, int fim) {
    int inversoes = 0;
    if (ini < fim) {
        int mid = (ini + fim) / 2;
        inversoes += mergeSort(a, ini, mid);
        inversoes += mergeSort(a, mid + 1, fim);
        inversoes += merge(a, ini, mid, fim);
    }
    return inversoes;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;

    while (cin >> n && n != 0) {
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int jogadas = mergeSort(a, 0, n - 1);
        if (jogadas % 2 == 0) {
            cout << "Carlos" << endl;
        } else {
            cout << "Marcelo" << endl;
        }
    }
    
    return 0;
}
