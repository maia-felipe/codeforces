#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;

    // 6 4 1 3 5 2
    // 2 4 1 3
    // 8 6 4 2 7 5 3 1
    // 7 5 3 1 6 4 2
    // 

    vector<int> even(n, 0);
    vector<int> odd(n,0);
    for(int i = 0; 2*i<= n; i++){
        even[i] = 2*i+1;
        odd[i] = 2*(i);
    }
    bool solvable = true;
    if (n==3 or n==2){
        cout << "NO SOLUTION\n";
        solvable = false;
    }

    if(solvable){
        for(int i = 0; i <odd.size(); i ++){
            if (odd[i]) cout << odd[i] << " ";
        }
        for(int i = 0; i < even.size(); i ++){
            if (even[i] && even[i] <= n) cout << even[i] << " ";
        }
    }

}