#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        
        int diff = abs(a - b);
        
        cout << (diff + 9) / 10 << "\n";
    }

    return 0;
}