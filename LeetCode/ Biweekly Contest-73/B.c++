#define ll long long 
vector<int> mp(10);
int convert(int x)
{
    int x1=x;
    vector<int> temp;
    if(x==0)
    {
        return mp[0];
    }
    int r;
    while(x)
    {
        r= x%10;
        temp.push_back(mp[r]);
        x/=10;
    }

    reverse(temp.begin(),temp.end());
    int i=0;
    while(i<temp.size() && temp[i]==0)
    {
        i++;
    }
    ll ans=0;
    for(int j=i;j<temp.size();j++)
    {
        ans=ans*10+temp[j];
    }
    return ans;
}


bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first)
        return a.second<b.second;
    
    return a.first<b.first;
}

class Solution {
public:
    vector<int> sortJumbled(vector<int>& m, vector<int>& nums) 
    {
        for(int i=0;i<m.size();i++)
        {
            mp[i]=m[i];
        }
        vector<pair<int,int>> temp;
        
        for(int i=0;i<nums.size();i++)
        {
            int c=convert(nums[i]);
            temp.push_back({c,i});
        }
        sort(temp.begin(),temp.end(),comp);
        
        vector<int> ans;
        
        for(auto &x: temp)
        {
            ans.push_back(nums[x.second]);
        }
        return ans;
    }
};