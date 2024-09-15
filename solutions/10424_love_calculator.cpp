#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <cctype>

using namespace std;

int letterValue(char letter) {
    if (isalpha(letter)) {
        return tolower(letter) - 96;
    }
    return 0;
}

int sumDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    if (sum >= 10) {
        sum = sumDigits
    (sum);
    }
    
    return sum;
}

int main() {
    string word1;
    string word2;

    while (getline(cin, word1) && getline(cin, word2)) {
        float sum1 = 0, sum2 = 0;
        int i;
        for (i = 0; i < word1.length(); i++) {
            sum1 += letterValue(word1[i]);
        }
        for (i = 0; i < word2.length(); i++) {
            sum2 += letterValue(word2[i]);
        }
        sum1 = sumDigits(sum1);
        sum2 = sumDigits(sum2);
        if (sum1 > sum2) {
            swap(sum1, sum2);
        }

        printf("%.2f %%\n", (sum1 / sum2) * 100);
    }

    return 0;
}