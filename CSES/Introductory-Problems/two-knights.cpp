#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n; 
    cin >> n;

    //in a k size chess bord, there are \chose{k^2}{2} ways to chose 2 from the k^2 squares

    /*
    that is (k^2!)/(2^! (k^2-2)!) = (k^2)(k^2-1)/2 possible ways.

    A knight can only atack other kight if they are inside the same 2x3 or 3x2 rectangle

    there are (k-1)(k-2) (2,3) rectangles and (k-2)(k-1) (3,2) rectangles, therefore, there are 2(k-1)(k-2) rectangles.

    The knights can be placed in two ways in each rectangle, therefore 4(k-1)(k-2) ways. So it must be 

    kˆ2(kˆ2-1)/2 - 4(k-1)(k-2) ways to place two nights in a k sized board
    */

    for(ll k = 1; k <= n; k++){
        cout << (k*k)*(k*k-1)/2 - 4*(k-1)*(k-2) << "\n";
    }
    

}