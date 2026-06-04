#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    

    string s = "codeforces";

    while(t--){
        char c;
        cin >> c;
        bool there = false;

        for(int i=0;i<10;i++){
            if(c==s[i]){
                cout <<  "YES" << endl;
                there = true;
                break;
            }
        }
            if(!there)
            cout << "NO" << endl;
    }


}