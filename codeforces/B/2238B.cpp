#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(){
    int n;
    cin >> n;
    ll ans = 0;

    for(int b = 1; b <= n; b++){
        ans += 1LL * (n/b)*(n/b);
    }
    cout << ans <<"\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >>t;
    while(t--) solve();

}