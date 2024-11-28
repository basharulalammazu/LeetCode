class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line = 1;
        int pixel = 0;

        for (int i =0 ; i < s.length(); i++)
        {
            int width = s[i]-'a';

            if (widths[width] + pixel >100)
            {
                line++;
                pixel = widths[width];
            }

            else
                pixel += widths[width] ;
            
        }
        return {line, pixel};
    }
};