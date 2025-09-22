class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        vector<pair<int,int>>vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),[] (const auto& a,const auto& b){
            return a.second > b.second;
        });
        int top=vec[0].second;
        int ans=0;
        for(auto i:vec)
        {
            if(i.second==top)
            {
                ans+=i.second;
            }
        }
        return ans;
    }
};