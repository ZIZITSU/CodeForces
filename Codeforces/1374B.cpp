#include<iostream>

using namespace std;

int main(){
    int LIMIT = 1000000000;

    int t;
    cin >> t;

    while(t--){
        int n,moves=0;
        cin >> n;
        
        while(n>1){
            if(n%6==0){
                n/=6;
                moves++;
            }
            else if(n%3==0){
                n*=2;
                moves++;
            }
            else{
                cout << "-1" << endl;
                break;
            }
        }
            if(n==1){
                cout<< moves << endl;
            }
            
    }
}