class Solution {
public:
    int minimumChairs(string s) {
        int flag=0,ans=INT_MIN;
        for(auto i:s)
        {
            if(i=='E')
            {
                flag++;
            }
            else
            {
                flag--;
            }
            ans=max(ans,flag);
        }
        return ans;
    }
};