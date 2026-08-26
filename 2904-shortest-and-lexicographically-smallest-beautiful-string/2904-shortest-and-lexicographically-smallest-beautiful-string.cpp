class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int i=0;
        int cnt=0;
        string ans="";
        for(int j=0;j<s.size();j++)
        {
            if(s[j]=='1')
            {
                cnt++;
            }
            while(cnt>k)
            {
                if(s[i]=='1')
                 cnt--;
                i++;
            }
            if(cnt==k)
            {
                while(s[i]=='0') i++;
                string cur=s.substr(i,j-i+1);
                if(ans.empty() || ans.length()>cur.length() || (ans.length()==cur.length() && ans>cur))
                {
                    ans=cur;
                }

            }


        }
        return ans;
    }
};