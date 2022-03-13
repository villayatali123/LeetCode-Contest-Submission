class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& a, vector<vector<int>>& dig) 
    {
        // map<pair<int,int>,int> mp;
        set<pair<int,int>> mp;
        for(int i=0;i<dig.size();i++)
        {
            // mp[{dig[i][0],dig[i][1]}]=1;
            mp.insert({dig[i][0],dig[i][1]});
        }
        
        int c=0;
        for(int i=0;i<a.size();i++)
        {
            bool ok=true;
            for(int j=a[i][0];j<=a[i][2];j++)
            {
                for(int k=a[i][1];k<=a[i][3];k++)
                {
                    if(mp.find({j,k})==mp.end())
                    {
                        ok=false;
                        // break;
                    }
                }
            }
            if(ok) c++;
        }
        return c;
    }
};