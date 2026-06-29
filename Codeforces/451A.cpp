#include <iostream>
using namespace std;

int main() {
    int a, b, turn = 0;
    cin >> a >> b;

    while (a != 0 && b != 0) {
        turn++;
        a--;
        b--;

        turn = turn % 2;
    }

    cout << (turn ? "Akshat" : "Malvika");

    return 0;
}