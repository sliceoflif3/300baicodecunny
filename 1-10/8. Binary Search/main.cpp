class Solution
{
public:
    int binary_search(vector<int> &nums, int l, int r, int target)
    {
        if (l > r)
            return -1;
        int m = (l + r) / 2;
        if (target == nums[m])
            return m;
        else if (target < nums[m])
            return binary_search(nums, l, m - 1, target);
        else
            return binary_search(nums, m + 1, r, target);
    }

    int search(vector<int> &nums, int target)
    {
        int l = 0;
        int r = nums.size() - 1;
        return binary_search(nums, l, r, target);
    }
};