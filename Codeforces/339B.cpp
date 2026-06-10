#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long current = 1;
    long long ans = 0;

    for (long long i = 0; i < m; i++) {
        long long target;
        cin >> target;

        if (target >= current)
            ans += target - current;
        else
            ans += n - current + target;

        current = target;
    }

    cout << ans << '\n';

    return 0;
}