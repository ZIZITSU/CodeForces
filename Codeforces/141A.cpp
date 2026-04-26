#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, s2, s3;
    cin >> s >> s2 >> s3;

    int freq[26] = {0};

    for (char ch : s) freq[ch - 'A']++;
    for (char ch : s2) freq[ch - 'A']++;
    for (char ch : s3) freq[ch - 'A']--;

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}