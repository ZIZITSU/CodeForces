#include<iostream>
#include<algorithm>
#include <limits.h>

using namespace std;

int main(){

    int n,m;

    cin >> n >> m;

    int f[m];
    int temp_diff=0, diff=INT_MAX;

    for(int i=0;i<m;i++){
        cin >> f[i];
    }

    sort(f, f+m);

    for(int i=0;i<m;i++){

        if(i+(n-1) <m)
        temp_diff = f[i+(n-1)] - f[i];

        else break;

        if(diff > temp_diff){
            diff = temp_diff;
        }
    }

    cout << diff;

}