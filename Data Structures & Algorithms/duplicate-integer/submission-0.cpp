class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Bruteforce Solution o(n^2)
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]==nums[j])
                {
                    return true;
                } 
            }
        }
        return false;
    }
};