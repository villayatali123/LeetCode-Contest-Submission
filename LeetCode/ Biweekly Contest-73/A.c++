class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        int n=nums.size();
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==key)
            {
                if(i+1 < n)
                {
                    mp[nums[i+1]]++;
                }
            }
        }
        int ans;
        int count=-1;
        
        for(auto &x: mp)
        {
            if(x.second > count)
            {
                count=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};