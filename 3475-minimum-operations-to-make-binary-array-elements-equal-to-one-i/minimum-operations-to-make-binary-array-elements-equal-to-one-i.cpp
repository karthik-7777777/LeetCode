class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i=0,j=2;
        int ans=0;
        while(j<nums.size())
        {
            if(nums[i]==1)
            {
                i++;
                j++;
            }
            else
            {
                for(int k=i;k<=j;k++)
                {
                    if(nums[k]==1)
                    {
                        nums[k]--;
                    }
                    else
                    {
                        nums[k]++;
                    }
                }
                ans++;
                i++;
                j++; 
            }
        }
        for(int m=0;m<nums.size();m++)
        {
            if(nums[m]==0)
            {
                return -1;
            }
        }
        return ans;
    }
};