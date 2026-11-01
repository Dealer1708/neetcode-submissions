class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int complement = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            complement = target - nums[i];

            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == complement)
                    return {i, j};
            }
        }

        return {};
    }
};
