#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    long long total_popcount = 0;
    long long power = 1;

    while (n >= power) {
        
        long long buy = min(k, n / power);
        
        total_popcount += buy;
        
        n -= buy * power;
        
        power *= 2;
    }

    cout << total_popcount << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}