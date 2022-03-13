class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        // map<int,int> mp;
        int n=nums.size();
        vector<int> ind;
        for(int i=0;i<n;i++) 
        {
            if(nums[i]==key)
                ind.push_back(i);
        }
        
        set<int> s;
        for(int i=0;i<ind.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                if(abs(ind[i]-j)<=k)
                {
                    s.insert(j);
                }
            }
        }
        vector<int> ans(s.begin(),s.end());
        
        return ans;
    }
};