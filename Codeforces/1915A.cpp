#include<iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    
    while(t--){
        
        int a, b, c;

        cin >> a >> b >> c;

        if(a-b ==0){
            cout << c << endl;
        }
        if(c-b ==0){
            cout << a << endl;
        }
        if(a-c ==0){
            cout << b << endl;
        }
        


}
}