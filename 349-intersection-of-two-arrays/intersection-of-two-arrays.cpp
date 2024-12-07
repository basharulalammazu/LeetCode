class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1(nums1.begin(), nums1.end());  // Convert nums1 into a set
        set<int> resultSet;

        // Iterate through nums2, if an element exists in set1, add it to resultSet
        for (int num : nums2) {
            if (set1.count(num)) 
                resultSet.insert(num);
            
        }

        // Convert the resultSet back into the vector
        return vector<int>(resultSet.begin(), resultSet.end());
    } 
};
