class Solution {
public:
    int scoreOfString(string s) {
        int sumi=0;
        for(int i=0;i<s.size()-1;i++)
        {
            sumi+=abs((int)s[i]-(int)(s[i+1]));
        }
        return sumi;
    }
};