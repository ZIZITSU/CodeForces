#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;


template<typename T, typename U, typename V>
T avg(T a, U b, V c) {
    return (a + b + c)/3;
}


int main() {
int x, y, z, aveg;

cin >> x >> y >> z;

aveg = avg(x, y, z);

    int mins = min(x, min(y, z));
    int maxx = max(x, max(y, z));
    int other = x + y + z - mins - maxx;


    cout << (maxx-other) + (other - mins) << endl;

}