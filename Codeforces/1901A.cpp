#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;


    while(t--){
    int n;
    cin >> n;

    int station[n];

    int x;
    cin >> x;

    int val = INT_MIN;

    for(int i=0;i<n;i++){
        cin >> station[i];
    }
    for(int i=0;i<n-1;i++){
        int diff = station[i+1]-station[i];
        if(diff>val){
            val = diff;
        }
    }

    if((station[0])>val){
        val = station[0];
    }

    if((2*(x-station[n-1]))>val){
        val = (2*(x-station[n-1]));
    }

    cout << val << endl;
    }



}