#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();

        vector<int> nums2(n);

        int j = 0;

        for(int i = 0; i < n; i++){
            if (nums[i]==val){
                continue;
                }
            else {
                nums2[j] = nums[i];
                j++;
            }
        }

        nums = nums2;

        return j++;
    }
};