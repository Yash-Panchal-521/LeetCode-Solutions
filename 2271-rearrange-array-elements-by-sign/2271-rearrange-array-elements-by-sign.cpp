class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();

        vector<int> pos; //for keeping all positive number in given array
        vector<int> neg; //for keeping all negative number in given array

        for(int i=0; i<n; i++)
        {
            if(nums[i]>0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }

        // creating new ans array
        vector<int>ans;
        //pushing each elel=ment one by one in pair from pos and neg

        for(int i=0; i<pos.size(); i++)
        {
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }
        return ans;
        
    }
};