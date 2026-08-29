class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt=0;
        for(auto m:hours)
        {
            if(m>=target) cnt++;
        }
        return cnt;
    }
};