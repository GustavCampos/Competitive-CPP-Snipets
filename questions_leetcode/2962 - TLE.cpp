#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long biggestNumber = *max_element(nums.begin(), nums.end());
        long long checks = 0;
        int totalCount = count(nums.begin(), nums.end(), biggestNumber);
        int tempCount;
        
        if (totalCount < k) return 0;
        
        for (int lastIndex = (nums.size() - 1); lastIndex >= (k - 1); lastIndex--) {
            tempCount = totalCount;
            
            for (int firstIndex = 0; firstIndex <= lastIndex; firstIndex++) {
                if (tempCount >= k) checks++;
                if (nums[firstIndex] == biggestNumber) tempCount--;                    
            }
            
            if (nums[lastIndex] == biggestNumber) totalCount--;            
        }
        
        return checks;
    }
};