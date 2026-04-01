#include<iostream>

using namespace std;

int main(){

    int s; //strength
    cin >> s;

    int n, count=0;
    cin >> n; 
    int x[n],y[n];
    bool z[n] = {false};

    for(int i=0;i<n;i++){
 
        cin >> x[i] >> y[i];

    }

    bool changed = true;

    while(changed){
        changed = false;

        for(int i=0;i<n;i++){
            if(!z[i]){
                if(s > x[i]){
                    s += y[i];
                    z[i] = true;
                    changed = true;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(z[i]){
            count ++;
        }

    }

    if(count == n)  cout << "YES";
    else            cout << "NO";




}