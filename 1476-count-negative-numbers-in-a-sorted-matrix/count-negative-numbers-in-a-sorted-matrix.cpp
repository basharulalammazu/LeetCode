class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count = 0, s1 = grid.size();

        for (int i = 0; i<s1; i++)
        {
            int s2 = grid[i].size();
            for(int j = 0; j<s2; j++)
            {
                if (grid[i][j] < 0) count++;
            }
        }

        return count;
    }
};