class Solution {
public:
vector<int> stimul(vector<int>& temp)
{
    if(temp.size()==1)
    {
        return temp;
    }
    vector<int>t;
    for(int i=0;i<temp.size()-1;i++)
    {
        int k=(temp[i]+temp[i+1])%10;
        t.push_back(k);
    }
    return stimul(t);
}
    int triangularSum(vector<int>& nums) {
        vector<int>ans=stimul(nums);
        return ans[0];
    }
};