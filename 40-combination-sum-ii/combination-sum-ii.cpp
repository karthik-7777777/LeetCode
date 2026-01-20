class Solution {
public:
void comb(vector<int>& candidates, int target,int idx,int sum,vector<int>&com,set<vector<int>>&ans){
    if(sum==target){
        ans.insert(com);
        return;
    }
    if(sum>target || idx>=candidates.size()){
        return;
    }
    com.push_back(candidates[idx]);
    comb(candidates,target,idx+1,sum+candidates[idx],com,ans);
    com.pop_back();
    int next = idx + 1;
    while (next < candidates.size() && candidates[next] == candidates[idx])next++;
    comb(candidates,target,next,sum,com,ans);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        set<vector<int>>ans;
        vector<int>com;
        comb(candidates,target,0,0,com,ans);
        vector<vector<int>>anss(ans.begin(),ans.end());
        return anss;
    }
};