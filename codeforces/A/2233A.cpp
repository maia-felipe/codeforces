#include<bits/stdc++.h>
using namespace std;
#define ll long long

int with_ai(int n, int x, int y, int z){
    int time = 0;

    while(time < z && n>0){
        time++;
        n = n-x;
    }
    while(n>0){
        time++;
        n = n-x-10*y;
    }
    return time;
}

int without_ai(int n, int x, int y){
    int time = 0;

    while(n>0){
        time ++;
        n = n-x-y;
    }

    return time;
}

void solve(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;

    cout << min(with_ai(n, x, y, z), without_ai(n, x, y)) << "\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
}