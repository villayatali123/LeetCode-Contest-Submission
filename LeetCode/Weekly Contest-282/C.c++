 #define ll long long

bool isValid(vector<int>& time, ll totalt,ll mid)
{
    ll count=0;
    
    for(auto &x: time)
    {
        if(x<=mid)
        {
            count+= mid/x;
        }
        if(count>=totalt) return true;
    }
    
    return count>=totalt;
}

class Solution {
public:
    long long minimumTime(vector<int>& time, int totaltime) 
    {
        int n=time.size();
        
        ll totalt=1LL*totaltime;
        ll low=0,high=1e18;
        ll mid,ans;
        while(low<=high)
        {
            mid=low+(high-low)/2LL;
            
            if(isValid(time,totalt,mid))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};