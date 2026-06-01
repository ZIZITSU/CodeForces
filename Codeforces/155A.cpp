#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int rating[n+1];

    for(int i=0;i<n;i++){
        cin >> rating[i];
    }

    int max = rating[0];
    int min = rating[0];
    int amazing =0;

    for(int i=0;i<n;i++){
        if(rating[i]>max){
            amazing++;
            max = rating[i];
        }
        else if(rating[i]<min){
            amazing++;
            min = rating[i];
        }
    }
        cout << amazing;






}