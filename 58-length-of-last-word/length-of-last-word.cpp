class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int size = 0;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (size == 0 && s[i] == ' ');
            else if (s[i] != ' ') size++;
            else if (size > 0 && s[i] == ' ') return size;
        }

        return size;

    }
};