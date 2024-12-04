class Solution {
public:
    int reverse(int x) 
    {
        long long int res = 0;
        while(x != 0)
        {
            res = res*10 + x%10;
            x /= 10; 
        }

        if(res>INT_MAX || res<INT_MIN) return 0; // check range if r is outside the range then return 0  
        return res;

    }
};