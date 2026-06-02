#include<iostream>
#include<climits>

using namespace std;

int main(){

    int k,r;

    cin >> k >> r;
    int price = k;

    for(int i=1;i<INT_MAX; i++){
        if(k%10==r || k%10==0){
            cout << i;
            return 0;
        }
        else{
            k = k +price;
        }
    }


}