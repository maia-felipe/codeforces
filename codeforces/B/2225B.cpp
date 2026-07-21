#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < (int)s.size() - 1; i++){
		ans += (s[i] == s[i + 1]);
	}
	cout << (ans <= 2 ? "YES\n" : "NO\n");
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
}