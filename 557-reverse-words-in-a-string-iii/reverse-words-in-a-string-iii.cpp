class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        s="";
        string t;  // Temporary object to store the splitted
        // Delimiter
        char del = ' ';

        // Splitting the str string by delimiter
        while (getline(ss, t, del))
        {
            reverse(t.begin(), t.end());
            s = s + " " + t;
        }
        

        return s.erase(0, 1);
    }
};