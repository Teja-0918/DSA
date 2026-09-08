class Solution {
public:
    int countCommas(int n) {
        string k=to_string(n);
        if(n==100000) return (n-1000)+1;
        if(k.size()<4) return 0;
        else
        {
            return (n-1000)+1;
            
        }
        
    }
};