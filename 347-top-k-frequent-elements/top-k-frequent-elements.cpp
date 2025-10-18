class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>temp;
        for(auto i:nums)
        {
            temp[i]++;
        }
        vector<pair<int,int>>freq(temp.begin(),temp.end());
        sort(freq.begin(),freq.end(),[](auto &a,auto &b){
            return a.second > b.second;
        });
        int f=0;
        vector<int>ans;
        for(auto i:freq)
        {
            if(f==k)
            {
                break;
            }
            else
            {
                ans.push_back(i.first);
                f++;
            }
        }
        return ans;
    }
};