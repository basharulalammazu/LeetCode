class Solution {
public:
    bool checkRecord(string s) {
        int abs = count(s.begin(), s.end(), 'A');
        int late = s.find("LLL");
        return abs<2 && late < 0;
    }
};