#include "bits/stdc++.h"

using namespace std;

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream strStream(str);
    while(getline(strStream, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        int i = 0, pos = 0, n; cin >> n;
        cin.ignore();
        int instructions[n];
        string instruction;
        for (; i < n; i++) {
            getline(cin, instruction);
            if (instruction == "LEFT") {
                pos--;
                instructions[i] = -1;
            }
            else if (instruction == "RIGHT") {
                pos++;
                instructions[i] = 1;
            }
            else {
                string y = split(instruction, ' ')[2];
                int x = instructions[stoi(y)-1];
                pos += x; 
                instructions[i] = x;
            }
        }
        cout << pos << endl;
    }
    return 0;
    
}