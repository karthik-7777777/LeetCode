class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>lzr;
        for(int i=0;i<bank.size();i++)
        {
            int c=0;
            for(int j=0;j<bank[i].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    c++;
                }
            }
            if(c>0)
            {
                lzr.push_back(c);
            }
        }
        int ans=0;
        if(lzr.size()<2)
        {
            return 0;
        }
        for(int i=0;i<lzr.size()-1;i++)
        {
            ans=ans+(lzr[i]*lzr[i+1]);
        }
        return ans;
    }
};