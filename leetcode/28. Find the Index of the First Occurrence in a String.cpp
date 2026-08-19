#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        int index = 0;

        for(int i = 0; i <= n-m; i++){
            while (haystack[i+index]==needle[index]){
                if(index==m-1){
                    return i;
                }
                index++;
                
            }
            index = 0;
        }

        return -1;
    }
};