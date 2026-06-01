#include<iostream>

using namespace std;

int main(){

    int a,b,count =0;
    cin >> a >> b;

    if(a>b){
        a -=b;
        cout << b  << " " << a/2;
        return 0;
    }
    if(b>a){
        b -=a;
        cout << a << " "  << b/2;
        return 0;

    }
    if(a==b){
        cout << a << " " << "0";
        return 0;

    }
        
}