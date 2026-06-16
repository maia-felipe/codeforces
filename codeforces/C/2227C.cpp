#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    
    vector<ll> m6, m2, m3, m1;
    
    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        
        if (x % 6 == 0) {
            m6.push_back(x);
        } else if (x % 2 == 0) {
            m2.push_back(x);
        } else if (x % 3 == 0) {
            m3.push_back(x);
        } else {
            m1.push_back(x);
        }
    }
    
    for (ll num : m6) cout << num << " ";
    for (ll num : m2) cout << num << " ";
    for (ll num : m1) cout << num << " ";
    for (ll num : m3) cout << num << " ";
    
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
}