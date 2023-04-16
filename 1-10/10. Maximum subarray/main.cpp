class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int ans = nums[0];
        int curSum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (curSum < 0)
                curSum = 0;
            curSum += nums[i];
            ans = max(curSum, ans);
        }
        return ans;
    }
};