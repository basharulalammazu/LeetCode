class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<int> index(list1.size(), -1);  

        for (int i = 0; i <list1.size();  i++)
        {
            for (int j = 0; j<list2.size(); j++)
            {
                if (list1[i] == list2[j])
                {
                    index[i] = (i+j);
                    break;
                }

                else 
                    index[i] = 10000000;
            }
        }

        int max = *min_element(index.begin(), index.end());

        vector<string> res;
        for (int i = 0; i<index.size(); i++)
        {
            if (index[i] == max)
                res.push_back(list1[i]);
        }

        return res;
        
    }
};