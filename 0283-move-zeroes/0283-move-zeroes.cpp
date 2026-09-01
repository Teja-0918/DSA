class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
            {left=i; break;}
        
        }
        if(left==nums.size()-1) return;
        
        int right=left+1;
        while(left<nums.size() && right<nums.size())
        {
            if(nums[right]!=0)
            {
                swap(nums[left],nums[right]);
                right++;
                left++;
            }
            else
            {
                right++;
            }
        }
        
    }
};