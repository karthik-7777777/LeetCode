class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>pref(n);
        vector<int>suff(n);
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            if(i>0)
            {
                pref[i]=nums[i]*pref[i-1];
            }
            else
            {
                pref[i]=nums[i];
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(i<n-1)
            {
                suff[i]=nums[i]*suff[i+1];
            }
            else
            {
                suff[i]=nums[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                ans[i]=suff[i+1];
            }
            else if(i==n-1)
            {
                ans[i]=pref[i-1];
            }
            else
            {
                ans[i]=pref[i-1]*suff[i+1];
            }
        }
        return ans;
    }
};