class Solution {
public:
    string getHint(string secret, string guess) {
        int b=0,c=0;
        map<char,int>mp;
        for(int i=0;i<secret.size();i++)
        {
            if(secret[i]==guess[i])
            {
                b++;
            }
            else
            {
                mp[secret[i]]++;
            }
        }
        // for(auto i:temp)
        // {
        //     if(mp[guess[i]])
        //     {
        //         mp[guess[i]]--;
        //         c++;
        //     }
        // }
        for(int i=0;i<guess.size();i++)
        {
            if(mp.find(guess[i])!=mp.end() && mp[guess[i]]>0 && guess[i]!=secret[i])
            {
                mp[guess[i]]--;
                c++;
            }
        }
        string ans=to_string(b)+'A'+to_string(c)+'B';
        return ans;
    }
};