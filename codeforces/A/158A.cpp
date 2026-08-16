#include<bits/stdc++.h>
using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int kth_score = nums[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] >= kth_score && nums[i] > 0) {
            count++;
        }
    }

    cout << count << "\n";

    return 0;
}