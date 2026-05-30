#include<iostream>

using namespace std;

int main(){
    int t, rating;

    cin >> t;

    while(t--){
        cin >> rating;

        if(rating<=1399){
            cout << "Division 4";
        }
        else if(rating<=1599 && rating>=1400){
            cout << "Division 3";
        }
        else if(rating<=1899 && rating>=1600){
            cout << "Division 2";
        }
        else if(rating>=1900){
            cout << "Division 1";
        }

        cout << endl;
        
    }
}