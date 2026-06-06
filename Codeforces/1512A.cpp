#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {

        int x;
        cin >> x;

        vector<int> a(x);
        map<int, int> freq;

        for (int i = 0; i < x; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        for (int i = 0; i < x; i++) {
            if (freq[a[i]] == 1) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}