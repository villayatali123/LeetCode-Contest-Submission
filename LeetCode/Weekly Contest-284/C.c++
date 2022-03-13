class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 0) 
            return n >= 1 ? nums[0] : -1;  
        if (k == 1) 
            return n == 1 ? -1 : nums[1];  
        if (n == 1) 
            return k % 2 == 0 ? nums[0] : -1;  
        int mx = *max_element(begin(nums), begin(nums) + min(k - 1, n));
        
        if (k < n) mx = max(mx, nums[k]);
        
        return mx;
    }
};