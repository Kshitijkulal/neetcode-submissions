class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans(2);
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (mp.count(diff) && mp[diff] != i) {
                ans[0] = mp[diff];
                ans[1] = i;
                return ans; 
            }
            mp[nums[i]] = i;
        }
    return ans;
    }
};
