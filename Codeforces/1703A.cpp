#include <iostream>
#include <string>
#include <cctype>
#include <string>

using namespace std;

int main() {

    int t;
    string str;

    cin >> t;
    while (t--)
    {
        cin >> str;


    int n = str.size();

    for (int i=0; i<n; i++) {
        str[i] = tolower(str[i]);
    }

    if(str=="yes"){
        cout << "YES" << endl;
        continue;
    }
    else{
        cout << "NO" << endl;
        continue;
    }
    
        
    }
    
    
    

}