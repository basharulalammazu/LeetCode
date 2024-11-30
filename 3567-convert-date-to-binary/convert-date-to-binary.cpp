class Solution {
public:

    string trimLeadingZeros(string binary) 
    {
        size_t firstOne = binary.find('1'); 
        if (firstOne != string::npos) 
            return binary.substr(firstOne); 
        
        return "0"; 
    }

    string convertDateToBinary(string date) 
    {
       int year = stoi(date.substr(0, 4));   
        int month = stoi(date.substr(5, 2)); 
        int day = stoi(date.substr(8, 2));  
       
        // Convert year, month, and day to binary
        bitset<12> binaryYear(year);   
        bitset<4> binaryMonth(month);  
        bitset<5> binaryDay(day);      

        return trimLeadingZeros(binaryYear.to_string()) + "-" + trimLeadingZeros(binaryMonth.to_string()) + "-" + trimLeadingZeros(binaryDay.to_string());
    }
};