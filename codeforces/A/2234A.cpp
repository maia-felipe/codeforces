#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;

    vector<ll> b(n);

    for(int i = 0; i < n; i ++){
        cin >> b[i];
    }

    sort(b.begin(), b.end(), greater<ll>());

    bool has_seq = true;

    if (n>2) {
        for(int i = 0; i < n-2; i++){
            if (b[i+2] != (b[i]%b[i+1])){
                has_seq = false;
                break;
            }
        }
    }

    if(has_seq) {cout << b[0] << " " << b[1] << "\n";}

    else {cout << -1 << "\n";}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {solve();}
}