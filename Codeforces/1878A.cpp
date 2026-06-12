#include<iostream>

using namespace std;

int main(){
    
    int t;
    int n,k;
    cin >> t;

    while(t--){
        cin >> n >> k;
            
        bool there = false;
        int x[n];

    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    for(int i=0;i<n;i++){
        if(x[i]==k){
            cout << "YES\n";
            there = true;
            break;
        }
    }
        if(!there){
            cout << "No\n";
        }



    }
    


    
    

}