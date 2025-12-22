class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        int m=INT_MAX,j,i;
        string ans="";
        for(auto s:strs)
        {
            m=min(m,(int)s.size());
        }
        int n=strs.size();
        for(i=0;i<m;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(strs[j][i]!=strs[j+1][i])
                {
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};