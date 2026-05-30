#include<iostream>

using namespace std;

int main(){

    int t,n;

    cin >> t;

    while(t--){
        cin >> n;

        n -= 1;
        if(n%3 == 0){
            cout << "First\n";
            continue;
        }

        n+=2;
        if(n%3 == 0){
            cout << "First\n";
            continue;
        }

        cout << "Second\n";

    }
}