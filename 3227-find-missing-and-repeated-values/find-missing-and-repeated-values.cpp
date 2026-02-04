class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        set<int>st;
        vector<int>ans;
        int n=grid.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        int rep=-1,mis=-1;
        for(int i=1;i<=n*n;i++){
            if(mp[i]==2)rep=i;
            if(mp[i]==0)mis=i;
        }
        ans.push_back(rep);
        ans.push_back(mis);
        return ans;
    }
};