#include<bits/stdc++.h>

using namespace std;

int main(){

    string x;
    cin >> x;

    int n = x.size();

    for(int i=0;i<n;i++){

        if(x[i]=='-'){
            if(x[i+1]=='-'){
               cout << "2";
               i++; 
               continue;
            }
            else if(x[i+1]=='.'){
                cout << "1";
                i++;
                continue;
            }
        }
        else{
            cout << "0";
            continue;
        }

    }



}