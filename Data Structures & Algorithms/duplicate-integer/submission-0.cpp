class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int temp;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (i < nums.size() && nums[i] >= nums[i + 1])
            {
                return true;
            }
        }
        return false;
    }
};