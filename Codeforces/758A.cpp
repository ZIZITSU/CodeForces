#include<iostream>
#include<algorithm>


using namespace std;

int main(){

    int n,count=0;
    cin >> n;
    int x[n];



    for(int i=0;i<n;i++){
        cin >> x[i];
    }

    sort(x,x+n);


    for(int i=0;i<n;i++){
        count+= (x[n-1]-x[i]);
    }


        cout << count << endl;
    



}