class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=neededTime.size();
        int maxi=neededTime[0];
        int sum=neededTime[0];
        int ans=0;
        for(int i=1;i<n;i++)
        {
            if(colors[i]==colors[i-1])
            {
                maxi=max(maxi,neededTime[i]);
                sum+=neededTime[i];
            }
            else
            {
                ans+=abs(sum-maxi);
                maxi=neededTime[i];
                sum=neededTime[i];
            }
        }
        ans+=abs(sum-maxi);
        return ans;
    }
};