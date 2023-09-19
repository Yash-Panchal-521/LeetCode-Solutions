class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();

        //if all numbers from range [0,n] would be present the TotalSum would be n*(n+1)/2
        int Totalsum = n*(n+1)/2;

        // we calculate the sum of given array
        int CurrSum = 0; 
        for(int i = 0; i<n; i++)
            CurrSum = CurrSum + nums[i];

        //the missing number would be added in CurrSum

        //Thus we can find missing number by subtracting CurrSum from Totalsum

        return Totalsum-CurrSum;

    }
};