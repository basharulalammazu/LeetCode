class Solution {
public:
      void rotate(vector<int>& nums, int k) {
        int size = nums.size(); 
        k = k % size;  // Normalize k to avoid unnecessary rotations
        vector<int> res(size);

        for (int i = 0; i < k; i++) 
            res[i] = nums[size - k + i];
        

        for (int i = 0; i < size - k; i++) 
            res[k + i] = nums[i];
        

        nums = res; // Copy 
    }
};