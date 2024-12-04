class Solution {
public:
    string interpret(string command) 
    {
        string s;

        for (int i = 0; i < command.length(); )
        {
            if (command[i] == '(' && command[i + 1] == ')')
            {
                s.push_back('o');  
                i += 2;  
            }
            
            else if ((command[i] == '(' && command[i + 1] != ')') || (command[i] == ')')) i++;
            
            else
            {
                s.push_back(command[i]);  
                i++;
            }
        }

        return s;
    }  
};
