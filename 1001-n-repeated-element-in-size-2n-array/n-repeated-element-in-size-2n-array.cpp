class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
            if(mp[i]==n)
            {
                return i;
            }
        }
        return 0;
    }
};