#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll y, x;
    cin >> y >> x;

    ll z = max(y, x);
    
    if (z % 2 == 0) {
        if (y == z) {
            cout << (z * z) - x + 1 << "\n";
        } else {
            cout << (z - 1) * (z - 1) + y << "\n";
        }
    } 
    else {
        if (x == z) {
            cout << (z * z) - y + 1 << "\n";
        } else {
            cout << (z - 1) * (z - 1) + x << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}