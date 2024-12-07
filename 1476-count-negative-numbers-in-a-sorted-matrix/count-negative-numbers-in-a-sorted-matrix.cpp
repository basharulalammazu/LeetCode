class Solution {
public:
    int binarySearchFirstNegative(const vector<int>& row) {
        int left = 0;
        int right = row.size();
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (row[mid] < 0) 
                right = mid;  
             else 
                left = mid + 1;  
            
        }
        
        return left;  
    }

    int countNegativesRecursive(const vector<vector<int>>& grid, int rowIndex) {
        if (rowIndex == grid.size()) 
            return 0;
        
        
        int firstNegativeIndex = binarySearchFirstNegative(grid[rowIndex]);
        int negativesInCurrentRow = grid[rowIndex].size() - firstNegativeIndex;
        
        return negativesInCurrentRow + countNegativesRecursive(grid, rowIndex + 1);
    }

    int countNegatives(vector<vector<int>>& grid) {
        return countNegativesRecursive(grid, 0);
    }
};
