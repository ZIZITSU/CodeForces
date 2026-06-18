#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> x(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        if (k >= 2) {
            cout << "YES\n";
        } else {
            if (is_sorted(x.begin(), x.end())) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    
    return 0;
}