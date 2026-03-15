#include<iostream>

using namespace std;

int main(){

    int t;
    int x=0,y=0,z=0;
    int cx=0,cy=0,cz=0;

    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;

        cx += x;
        cy += y;
        cz += z;


    }

    if(cx==cy && cy==cz && cz==0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    




}