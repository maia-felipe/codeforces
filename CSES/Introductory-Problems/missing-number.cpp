#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n;
    cin >> n;

    vector<int> check(n, 0);
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        check[x-1] = x;
    }
    
    for(int i = 0; i < n; i++){
        if (check[i]==0){
            cout << i+1;
        }
    }
}
