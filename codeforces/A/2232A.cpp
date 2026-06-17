#include <bits/stdc++.h>
using namespace std;

void solve(){  
    int n; 
    cin >> n;

    vector<int> a(n);
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int min_calls = 1e9; 

    for(int i = 0; i < n; i++){
        int l = 0;
        int r = 0;

        for(int j = 0; j < n; j++){
            if(a[j] < a[i]){
                l++;
            } else if(a[j] > a[i]){
                r++;
            }
        }

        int cost = max(l, r);
        min_calls = min(min_calls, cost);
    }

    cout << min_calls << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
    
    return 0;
}