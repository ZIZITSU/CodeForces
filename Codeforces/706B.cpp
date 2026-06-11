#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    sort(x, x + n);

    int q;
    cin >> q;

    while (q--) {
        int p;
        cin >> p;

        cout << upper_bound(x, x + n, p) - x << endl;
    }
}