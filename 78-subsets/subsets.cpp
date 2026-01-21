class Solution {
public:
void sbst(vector<int>nums,int idx,vector<int>&sub,vector<vector<int>>&ans){
    if(idx>=nums.size()){
        ans.push_back(sub);
        return;
    }
    ans.push_back(sub);
    for(int i=idx;i<nums.size();i++){
        sub.push_back(nums[i]);
        sbst(nums,i+1,sub,ans);
        sub.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>sub;
        sbst(nums,0,sub,ans);
        return ans;
    }
};