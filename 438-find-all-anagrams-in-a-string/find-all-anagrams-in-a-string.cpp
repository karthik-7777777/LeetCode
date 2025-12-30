class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.size();
        map<char,int>fp;
        map<char,int>fs;
        vector<int>ans;
        for(auto i:p)
        {
            fp[i]++;
        }
        for(int i=0;i<s.size();i++)
        {
            fs[s[i]]++;
            if(i>=n)
            {
                fs[s[i-n]]--;
                if(fs[s[i-n]]<1)
                {
                    fs.erase(s[i-n]);
                }
            }
            if(i>=n-1 && fs==fp)
            {
                ans.push_back(i-n+1);
            }
        }
        return ans;
    }
};