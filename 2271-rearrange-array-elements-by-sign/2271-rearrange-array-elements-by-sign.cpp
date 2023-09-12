class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        //creating new ans array
        vector<int> ans(n);

        //here pos will indicate index for positive element, viceversa for neg
        int pos = 0, neg=1;

        for(int i=0; i<n; i++)
        {
            if(nums[i]<0)
            {
                ans[neg] = nums[i];
                neg+=2;
            }
            else
            {
                ans[pos] = nums[i];
                pos+=2;
            }
        }

        return ans;
        
        
    }
};