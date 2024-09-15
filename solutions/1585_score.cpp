#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int score(string str) {
    int i, sum = 0, qtZero = 0;
    for (i = 0; i < str.length(); i++) {
        if (str[i] == 'X') {
            sum += (qtZero * (qtZero+1)) / 2;
            qtZero = 0;
        }
        else qtZero++;
    }
    sum += (qtZero * (qtZero+1)) / 2;
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);
    string str;
    while(t--) {
        cin >> str;
        printf("%d\n", score(str));
    }

    return 0;
}