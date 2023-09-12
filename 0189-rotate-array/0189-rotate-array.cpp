class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        //creating new array for storing ans
        int n = nums.size();
        vector<int> ans(n);

        //after rotating the original array k-times, newIndex for same element would be (index+k)%n

        // so we for each index we store that element in new array at newIndex

        for(int index = 0 ; index < n; index++)
        {
            int newIndex = (index+k)%n;
            ans[newIndex] = nums[index];
        } 

        //as we do not need to return anything, we will assign the ans vector as nums.
        nums = ans;



    }
};