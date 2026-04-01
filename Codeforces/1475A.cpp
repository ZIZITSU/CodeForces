#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        while (x % 2 == 0) {
            x /= 2;
        }

        if (x == 1)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}