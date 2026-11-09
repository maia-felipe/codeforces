#include <bits/stdc++.h>
using namespace std;

void solve() {
int N; cin >> N;
    string s; cin >> s;
    int z = 0;
    int o = 0;
    for (int i = 0; i < N; i++) {z+=(s[i]=='0');}
    if (s[0]=='1') {cout << z << endl; return;}
    int m = 1e9;
    for (int i = 0; i < N; i++) {
        o+=(s[i]=='1');
        z-=(s[i]=='0');
        m=min(m,o+z);
    }
    cout << m << endl;
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