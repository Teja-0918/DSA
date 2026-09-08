class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans=-1;
        vector<int>nums1(nums.size());
        nums1[0]=nums[0];
        for(int i=1;i<nums.size();i++) nums1[i]=nums[i]+nums1[i-1];
        reverse(nums.begin(),nums.end());
        vector<int>nums2(nums.size());
        nums2[0]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            nums2[i]=nums2[i-1]+nums[i];
        }
        reverse(nums2.begin(),nums2.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums1[i]==nums2[i])
            {
                ans=i;
                break;
            }
        }
        return ans;
    }
};