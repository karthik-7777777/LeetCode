class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]%2;
        }
        int l=0,r=0;
        int odd=0,ans=0,cnt=0;
        while(r<n)
        {
            if(nums[r]==1)
            {
                odd++;
                cnt=0;
            }
            while(odd==k)
            {
                cnt++;
                if(nums[l]==1)
                {
                    odd--;
                }
                l++;
            }
            ans+=cnt;
            r++;
        }
        return ans;
    }
};