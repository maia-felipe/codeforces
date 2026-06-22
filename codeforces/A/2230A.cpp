#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, a, b;
    cin >> n >> a >> b;

    
    ll custo_grupos = (n / 3) * min(3 * a, b);

    ll resto_alunos = n % 3;
    

    ll custo_resto = min(resto_alunos * a, b);

    cout << custo_grupos + custo_resto << "\n";
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