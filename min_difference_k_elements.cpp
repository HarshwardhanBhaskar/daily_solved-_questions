#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());
        int ans = INT_MAX;

        for (int i = 0; i <= nums.size() - k; i++) {
            ans = min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
};

int main() {
    int n, k;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    cout << "Enter the value of k: ";
    cin >> k;

    Solution s;
    int result = s.minDifference(nums, k);

    cout << "The minimum difference between highest and lowest of k elements is: "
         << result << endl;

    return 0;
}
