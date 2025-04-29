#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long biggestNumber = *max_element(nums.begin(), nums.end());
        long long checks = 0;
        int left = 0;
        int count = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == biggestNumber) count++;

            while (count >= k) {
                checks += nums.size() - right;
                if (nums[left] == biggestNumber) count--;
                left++;
            }
        }
        
        return checks;
    }
};