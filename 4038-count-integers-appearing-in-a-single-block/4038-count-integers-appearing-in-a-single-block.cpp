class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
       unordered_map<int,int>ump;
       int cnt=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
                 ump[nums[i]]++;
            }
        }
        for(auto k:ump)
        {
            if(k.second==1) cnt++;
        }
        return cnt;
       
    }
};