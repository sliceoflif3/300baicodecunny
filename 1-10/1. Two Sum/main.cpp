class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); i++) {
            int m = target - nums[i];
            if (map.count(m)) {
                return {i, map[m]};
            }
            map[nums[i]] = i;
        }
        return {};
    }
};