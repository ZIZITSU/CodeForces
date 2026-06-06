#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;

    cin >> n >> l;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    long long max_gap = 0;

    for (int i = 0; i < n - 1; i++) {
        max_gap = max(max_gap, arr[i + 1] - arr[i]);
    }

    double ans = max({
        (double)arr[0],
        (double)(l - arr[n - 1]),
        max_gap / 2.0
    });

    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}