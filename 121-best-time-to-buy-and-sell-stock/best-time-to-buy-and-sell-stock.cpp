class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minp=INT_MAX, maxp=0;
        
        for(int i=0; i<prices.size(); i++)
        {
            minp=min(minp,prices[i]);
            maxp=max(maxp,prices[i]-minp);
        }   
        return maxp; 
    }
};