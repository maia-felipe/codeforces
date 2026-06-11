#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s.size()<=2){
            cout << 0 << endl;
            continue;
        }

        int initial_len = s.size();

        s.erase(remove(s.begin(), s.end(), '4'), s.end());

        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='2'){
                s.erase(remove(s.begin()+i, s.end(), '2'), s.end());
                break;
            }
        }

        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='3'){
                s.erase(remove(s.begin()+i, s.end(), '3'), s.end());
                break;
            }
        }

        cout << initial_len - (int)s.size() << endl;
    }
}