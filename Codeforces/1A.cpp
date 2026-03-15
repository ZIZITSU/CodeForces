#include<iostream>

using namespace std;



int main(){

long long int m, n, a;

cin >> m >> n >> a;

long long int area1, area2;

area1 = (m+a -1)/a;
area2 = (n+a -1)/a;

cout << area1*area2;

}