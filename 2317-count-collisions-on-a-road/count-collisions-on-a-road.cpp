class Solution {
public:
    int countCollisions(string directions) {
        int l=0,r=directions.size()-1;
        for(int i=0;i<directions.size();i++)
        {
            if(directions[i]=='L')
            {
                l++;
            }
            else break;
        }
        for(int i=directions.size()-1;i>=0;i--)
        {
            if(directions[i]=='R')
            {
                r--;
            }
            else break;
        }
        int ans=0;
        for(int i=l;i<=r;i++)
        {
            if(directions[i]=='L' || directions[i]=='R')
            {
                ans++;
            }
        }
        return ans;
    }
};