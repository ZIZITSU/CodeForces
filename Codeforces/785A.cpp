#include <iostream>

using namespace std;

int main(){
    int t, count=0;
    cin >> t;
    string x;
    while (t--)
    {
        cin >> x;
        if(x=="Tetrahedron"){
            count += 4;
        }
        else if(x=="Cube"){
            count += 6;
        }
        else if(x=="Octahedron"){
            count += 8;
        }
        else if(x=="Dodecahedron"){
            count += 12;
        }
        else if(x=="Icosahedron"){
            count += 20;
        }
    }
    
            cout << count;

}