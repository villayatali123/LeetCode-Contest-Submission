class Solution {
public:
    int prefixCount(vector<string>& words, string pref) 
    {
        int n=words.size();
        int m=pref.size();
        int count=0;
        
        for(auto &x: words)
        {
            if(x.length() < m) continue;
            
            int i=0;
            while(i<m && pref[i]==x[i])
            {
                i++;
            }
            count+=(i==m);
        }
        return count;
    }
};