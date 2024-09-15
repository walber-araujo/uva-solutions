#include "bits/stdc++.h"
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int j = 0;
    string venc;
    while(1) {
        int n, p; cin >> n >> p;
        if ((n == 0) && (p == 0)) {
            cout << "RFP #" << j << endl << venc << endl;
            break;
        }
        else if (j != 0) {
            cout << "RFP #" << j << endl << venc << endl << endl;
        }
        int max = -1;
        float precoVenc;
        
        cin.ignore();
        string x, emp;
        for (int i = 0; i < n; i ++) {
            getline(cin, x);
        }

        for (int i = 0; i < p; i++) {
            getline(cin, emp);
            
            float preco; cin >> preco;
            int atendidos; cin >> atendidos;
            cin.ignore();

            for (int i = 0; i < atendidos; i++) {
                getline(cin, x);
            }

            if (atendidos > max) {
                max = atendidos;
                venc = emp;
                precoVenc = preco;
            }
            else if (atendidos == max) {
                if (preco < precoVenc) {
                    venc = emp;
                    precoVenc = preco;
                }
            }

        }
        j++;
    }

}