#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, l;

    cin >> n >> l;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    float min= INT_MAX;

    for (int i = 0; i < n-1; i++) {
        float x;
        x = (arr[i] + arr[i+1])/2;

        if(x<min){
            min = x;
        }
    }

        cout << min << endl;



}