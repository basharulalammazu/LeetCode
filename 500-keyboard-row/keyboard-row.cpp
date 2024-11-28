class Solution {
public:
    vector<string> findWords(vector<string>& words) 
    {
        vector<string> res;
        for (string word : words) 
        {
            int a = 0, b = 0, c = 0;

            for (char ch : word) 
            {
                if (string("qwertyuiop").find(tolower(ch)) != string::npos) 
                    a++;
                if (string("asdfghjkl").find(tolower(ch)) != string::npos) 
                    b++;
                if (string("zxcvbnm").find(tolower(ch)) != string::npos) 
                    c++;
            }

            // Check if all characters belong to the same row
            if ((a > 0 && b == 0 && c == 0) || (a == 0 && b > 0 && c == 0) || (a == 0 && b == 0 && c > 0)) 
                res.push_back(word);
            
        }

        return res;
    }
};
