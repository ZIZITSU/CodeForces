#include<bits/stdc++.h>
#include<deque>

using namespace std;

int main(){
    int n;

    cin >>n; 

    deque<int> c(n);

    for(int i=0;i<n;i++){
        cin >> c[i];
    }

    int sum_Sreeja = 0;
    int sum_Dima = 0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(c.front() > c.back()){
                
                    sum_Sreeja += c.front();
                    c.pop_front();
            }
            else{
                    sum_Sreeja += c.back();
                    c.pop_back();
            }
        }

        if(i%2==1){
            if(c.front() > c.back()){
                
                    sum_Dima += c.front();
                    c.pop_front();
            }
            else{
                    sum_Dima += c.back();
                    c.pop_back();
            }
        }
    }

                    cout << sum_Sreeja << " " << sum_Dima;
}