#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int n;
    cin >>n;

    vector<ll> x(n);

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    // 1 2 8 2 4 3
    
    ll moves = 0;


    for(int i = 0; i < n-1; i++){
        if (x[i] > x[i+1]){
           moves += x[i] - x[i+1];
           x[i+1] = x[i];
        }
    }

    cout << moves;
}