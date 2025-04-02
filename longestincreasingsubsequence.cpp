#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> dp(n, 1);
        vector<int> count(n, 1);

        int maxLength = 1, totalCount = 0;

        for (int i = 1; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j]) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j];
                    } else if (dp[j] + 1 == dp[i]) {
                        count[i] += count[j];
                    }
                }
            }
            maxLength = max(maxLength, dp[i]);
        }

        for (int i = 0; i < n; i++) {
            if (dp[i] == maxLength) {
                totalCount += count[i];
            }
        }

        return totalCount;
    }
};

int main() {
    vector<int> nums = {1, 3, 5, 4, 7};
    Solution sol;
    cout << sol.findNumberOfLIS(nums) << endl; // Output: 2
    return 0;
}
