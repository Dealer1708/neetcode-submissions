class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indeces;

        for (int i = 0; i < nums.size(); i++)
        {
            indeces[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];

            if (indeces.count(complement))
            {
                if (indeces[complement] != i)
                {
                    return {i, indeces[complement]};
                }
            }

        }
        return {};
    }
};
