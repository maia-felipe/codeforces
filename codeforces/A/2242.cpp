#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int k;
    cin >> k;
    vector<int> c(k);

    int two_more = 0;
    int three_more = 0;

    for(int i = 0; i < k; i++){
        cin >> c[i];
        if (c[i]>2) {three_more++;}

        else if (c[i]>1) {two_more++;}

    }
    if(two_more>1){
            cout << "Yes\n";
            return;
        }
        if(three_more){
            cout << "Yes\n";
            return;
        }
    cout << "No\n";
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
}