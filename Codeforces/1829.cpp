#include <iostream>
#include <cmath>

using namespace std;

int main(){

int t;
cin >> t;

while(t--){
    int n, count=0,x=0;
    cin >> n;
    
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i]== 0){
            count ++;
            x = max(x, count);
        }
        else{
            count = 0;
        }
    }

    cout << x << endl;

   
}



}