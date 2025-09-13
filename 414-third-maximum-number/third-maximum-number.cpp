class Solution {
public:
    int thirdMax(vector<int>& nums) {
       set<int>nums2(nums.begin(),nums.end());
       vector<int>n(nums2.begin(),nums2.end());
       sort(n.rbegin(),n.rend());
       if(n.size()>2)
       {
        return n[2];
       }
       else
       {
        return(n[0]);
       }
       return 0;
    }
};