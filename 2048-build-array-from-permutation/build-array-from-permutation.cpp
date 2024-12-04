class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> num;
        for (int i = 0; i<nums.size(); i++)
            num.push_back(nums[nums[i]]);
        
        return num;
    }
};