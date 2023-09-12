class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        
        int n = mat.size();
        // first we will transpose
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }

        //now we will reverse each row 
        for(int i=0; i<n; i++)
        {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
};