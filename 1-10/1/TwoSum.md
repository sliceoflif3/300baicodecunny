# 1. Two Sum 

I use hashmap to solve this problem. We only need to traverse the array 1 time, while we are iterating and inserting elements into the map, we also look back to check if current element's complement already exists in the map. 

```cpp
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
```

