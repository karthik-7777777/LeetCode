class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=*min_element(nums.begin(),nums.end());
        sort(nums.rbegin(),nums.rend());
        int ans=0;
        for(auto i:nums)
        {
            ans+=(maxi-i);
        }
        return ans*-1;
    }
};