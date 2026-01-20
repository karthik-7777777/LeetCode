class Solution {
public:
void comb(vector<int>& candidates, int target,int idx,int sum,vector<int>& com,vector<vector<int>>& ans){
    if(target==sum){
        ans.push_back(com);
        return;
    }
    if(sum > target || idx >= candidates.size()){
        return;
    }
    com.push_back(candidates[idx]);
    comb(candidates,target,idx,sum+candidates[idx],com,ans);
    com.pop_back();
    comb(candidates,target,idx+1,sum,com,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>com;
        comb(candidates,target,0,0,com,ans);
        return ans;
    }
};