class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int X=0;

        for(auto str: operations)
        {
            if(str[1]=='+')
                X++;
            else
                X--;
        }

        return X;
        
    }
};