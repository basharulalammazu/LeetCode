class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int prev = 0, curr = 0;

        for (int i = 0; i<accounts.size(); i++)
        {
            for (int j = 0; j<accounts[i].size(); j++)
                curr += accounts[i][j];
            
            if (curr > prev)
                prev = curr;
            
            curr = 0;

        }

        return prev;
    }
};