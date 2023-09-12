class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        vector<int> ans;

        int countOne = INT_MIN; // for keeping the maximum count of ones in row in matrix
        int currRow = -1; // for keeping the trace of Row that is having maximum ones in matrix

        for(int i=0; i<mat.size(); i++)
        {
            int count = 0;
            for(int j=0; j<mat[i].size(); j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            if(count>countOne)
            {
                countOne = count;
                currRow = i;
            }
        }

        ans.push_back(currRow);
        ans.push_back(countOne);

        return ans;
        
    }
};