#include<bits/stdc++.h>
using namespace std;
#define ll long long;

void solve() {
    int n;
    cin >> n;
    
    if (n == 2) {
        cout << "1 2 1 2 2 1 1 2\n";
        return;
    }
    
    vector<int> ans;
    ans.reserve(4 * n); 
    
    for (int i = 1; i <= n; i++) {
        ans.push_back(i);
    }
    
    for (int i = 1; i <= n; i++) {
        ans.push_back(i);
    }
    
    ans.push_back(2); ans.push_back(2);
    ans.push_back(1); ans.push_back(1);
    for (int i = 3; i <= n; i++) {
        ans.push_back(i);
        ans.push_back(i);
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;