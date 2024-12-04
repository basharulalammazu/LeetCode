class Solution 
{
public:
    bool isNumber(string s) 
    {
        bool hasNum = false;   // To track if there is at least one digit
        bool hasDot = false;   // To track if there is a decimal point
        bool hasE = false;     // To track if there is 'e' or 'E'
        bool hasSign = false;  // To track if there is a sign (+ or -)

        for (int i = 0; i < s.length(); i++) 
        {
            // Check for a valid digit
            if (isdigit(s[i])) 
                hasNum = true;
            
            // Check for a decimal point
            else if (s[i] == '.') 
            {
                // A dot can only appear once, and it cannot appear after an 'e' or 'E'
                if (hasDot || hasE) 
                    return false;
                
                hasDot = true;
            }
            // Check for 'e' or 'E'
            else if (s[i] == 'e' || s[i] == 'E') 
            {
                // 'e' or 'E' cannot appear at the start, after another 'e', or if there is no number before it
                if (!hasNum || hasE) 
                    return false;
                
                hasE = true;
                hasSign = false;  // Reset sign after 'e'
                hasNum = false;   // We need a number after 'e'
            }
            // Check for signs
            else if (s[i] == '+' || s[i] == '-') 
            {
                // Sign should be at the start or after 'e' or 'E'
                if (i == 0 || (s[i - 1] == 'e' || s[i - 1] == 'E')) 
                    hasSign = true;
                
                else 
                    return false;
                
            }
            else 
                return false;
            
        }

        return hasNum;
    }
};
