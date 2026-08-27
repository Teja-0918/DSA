class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        map<char,int>omp;
        for(auto m:s) omp[m]++;
        string ans="";
        
        for(auto k:target)
        {
            if(omp.count(k))
            {
                ans+=k;
                omp[k]--;
                if(omp[k]==0) omp.erase(k);
                 
            }
            else {
                auto it=omp.upper_bound(k);
                if(it!=omp.end())
                {
                    ans+=it->first;
                    omp[it->first]--;
                for(auto &i:omp)
                {
                    while(i.second>0)
                    {
                        ans+=i.first;
                        i.second--;
            
                    }
                }
                return ans;
                }
                break;
                
            
            }
        }
             
        for(int i=ans.size()-1;i>=0;i--)
        {
            omp[ans[i]]++;
            auto it=omp.upper_bound(ans[i]);
            if(it!=omp.end())
            {
                string res="";
                for(int j=0;j<i;j++)
                {
                    res+=ans[j];
                }
                res+=it->first;
                omp[it->first]--;
            
            for(auto &y:omp)
            {
                while(y.second>0)
                {
                    res+=y.first;y.second--;
                }
            }
            return res;
        }
            
        }
        return "";

    }
};