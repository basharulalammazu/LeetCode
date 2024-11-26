class Solution {
public:
    int scoreOfString(string s) {
        int res = 0; 
        for (int i = 0; i<s.size()-1; i++)
            res = res + abs(int(s[i]) - int(s[i+1])) ; 
        
        return res;
    }
};
