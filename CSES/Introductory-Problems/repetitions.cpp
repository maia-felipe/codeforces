#include <bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin >> n;

    int rep = 1;
    int tmp = 1;

    for(int i = 0; i < n.length()-1; i++){
        if(n[i]!=n[i+1]){
            rep = max(rep, tmp);
            tmp = 1;
        }
        else{
            tmp++;
            rep = max(rep,tmp);
        }
    }
    cout << rep;
    
}