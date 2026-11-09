#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    vector<int> docs (n);

    for(int i = 0; i < n; i++){
        docs[i] = i+1;
    }

    vector<int> memory;
    vector<int> printed;

   vector<bool> is_printed(n + 1, false);
    
    for(int i = 0; i < n; i++){
        if (s[i] == '1'){
            memory.push_back(docs[i]);
        }
        else if (s[i] == '2'){
            if (memory.empty()){
                printed.push_back(docs[i]);
                is_printed[docs[i]] = true;
            }
            else{
                int doc_to_print = memory.back(); 
                printed.push_back(doc_to_print);
                is_printed[doc_to_print] = true; 
                memory.pop_back();
            }
        }
        else if (s[i] == '3'){
            printed.push_back(docs[i]); 
            is_printed[docs[i]] = true; 
        }
    }

    vector<int> not_printed;
    for(int i = 1; i <= n; i++){
        if (!is_printed[i]){
            not_printed.push_back(i);
        }
    }

    cout << not_printed.size() << "\n";
    for(int doc : not_printed){
        cout << doc << " ";
    }
    cout << "\n";

}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) solve();
}