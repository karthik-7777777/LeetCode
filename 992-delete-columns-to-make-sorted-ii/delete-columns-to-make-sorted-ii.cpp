class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int m=strs[0].size();
        int ans=0;
        vector<bool>chk(strs.size()-1,false);
        for(int i=0;i<m;i++)
        {
            int flag=0;
            for(int j=0;j<strs.size()-1;j++)
            {
                if(!chk[j] && strs[j][i]>strs[j+1][i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
                ans++;
            }
            else
            {
                for(int j=0;j<strs.size()-1;j++)
                {
                    if(!chk[j] && strs[j][i]<strs[j+1][i])
                    {
                        chk[j]=true;
                    }
                }
            }
        }
        return ans;
    }
};