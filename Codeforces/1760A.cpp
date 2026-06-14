#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int t;
    int x[3];
    cin>> t;
    
    while(t--){
        cin >> x[0] >> x[1] >> x[2];

        sort(x,x+3);

        cout << x[1] << endl;
    }

}