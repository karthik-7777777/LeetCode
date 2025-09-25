class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int>temp(nums.begin(),nums.end());
        int x=temp.size();
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            set<int>chk;
            for(int j=i;j<nums.size();j++)
            {
                chk.insert(nums[j]);
                if(chk.size()==x)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};