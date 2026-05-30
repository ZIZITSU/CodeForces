#include<iostream>

using namespace std;

int main(){

    int n, k, count=0;

    cin >> n >> k;

    k = 240 - k;

    for(int i=1;i<=n; i++){
        if(5*i <= k){
            k -= 5*i;
            count = i;
        }
        else{
            cout << i-1;
            return 0;
        }
    }

            cout << count;

    
}