#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink = k*l;
    int total_slices = c*d;

    int toast_drink_wise = total_drink/nl;
    int toast_lemon_wise = total_slices;
    int toast_salt_wise = p/np;

    cout << min(toast_drink_wise, min(toast_lemon_wise, toast_salt_wise)) / n;


}