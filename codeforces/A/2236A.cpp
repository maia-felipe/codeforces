#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> h(n);

    int big = -1;
    int small = 7;
    
    for(int i = 0; i <n; i++){
        cin >> h[i];
        big = max(h[i], big);
        small = min(h[i], small);
    }

    cout << big-small+1 << "\n";


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--) solve();
}
