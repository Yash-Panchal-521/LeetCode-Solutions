class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int i=0; //for keeping all 0's left side of i
        int j=nums.size()-1; //for keeping all 2's right side of j
        //all 1's will be in between i & j
        int index = 0; // for traversing the array


        while(index<=j)
        {
            //if current element is 0 then swap it with i-th element and increment i & index
            if(nums[index]==0)
            {
                swap(nums[index], nums[i]);
                index++;
                i++;
            }

            // if current element is 2 then swap with j-th element and decrement only j & don't update index as we dont that which value is current, it can be(0,1,2)
            else if(nums[index]==2) 
            {
                swap(nums[index], nums[j]);
                j--;
            } 
            //else only increment the index
            else
            {
                index++;
            }

        }


    }
};