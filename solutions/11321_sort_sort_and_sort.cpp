#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int ini, int mid, int fim, int m) {
    vector<int> aux(a.begin(), a.end());
    int i = ini, j = mid + 1, k = ini;

    while (i <= mid && j <= fim) {
        int mod_i = aux[i] % m;
        int mod_j = aux[j] % m;

        if (mod_i < mod_j) {
            a[k++] = aux[i++];
        } else if (mod_i > mod_j) {
            a[k++] = aux[j++];
        } else {
            bool is_i_odd = aux[i] % 2 != 0;
            bool is_j_odd = aux[j] % 2 != 0;

            if (is_i_odd && !is_j_odd) {
                a[k++] = aux[i++];
            } else if (!is_i_odd && is_j_odd) {
                a[k++] = aux[j++];
            } else if (is_i_odd && is_j_odd) {
                if (aux[i] > aux[j]) {
                    a[k++] = aux[i++];
                } else {
                    a[k++] = aux[j++];
                }
            } else {
                if (aux[i] < aux[j]) {
                    a[k++] = aux[i++];
                } else {
                    a[k++] = aux[j++];
                }
            }
        }
    }

    while (i <= mid) {
        a[k++] = aux[i++];
    }

    while (j <= fim) {
        a[k++] = aux[j++];
    }
}

void mergeSort(vector<int> &a, int ini, int fim, int m) {
    if (ini < fim) {
        int mid = (ini + fim) / 2;
        mergeSort(a, ini, mid, m);
        mergeSort(a, mid + 1, fim, m);
        merge(a, ini, mid, fim, m);
    }
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    while (true) {
        int n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) {
            cout << "0 0" << endl;
            break;
        }

        vector<int> nums(n);
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        mergeSort(nums, 0, n - 1, m);

        cout << n << " " << m << endl;
        for (int i = 0; i < n; ++i) {
            cout << nums[i] << endl;
        }
    }

    return 0;
}
