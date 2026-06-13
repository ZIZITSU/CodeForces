#include<iostream>

using namespace std;

int main(){


    int t,n;
    cin >> t;
    
    while(t--){

        cin >> n;

        int x[n], count=0;

        for(int i=0;i<n;i++){
            cin >> x[i];
            if(x[i]%2){
                count++;
            }
        }

        if(count%2){
            cout<< "NO\n";           
        }
        else{
            cout << "YES\n";
        }
    }

}