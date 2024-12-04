class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0)
            return n;
        else if ((n*2) % 2 == 0)
            return n*2;
        else if ((n*3) % 2 == 0)
            return n*3;
        
        return 9999999999999999;
    }
};