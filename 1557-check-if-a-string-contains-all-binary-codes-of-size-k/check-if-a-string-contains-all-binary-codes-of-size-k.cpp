class Solution {
public:
    bool hasAllCodes(string s, int k) {
        map<string,int>mp;
        string ss="";
        for(int i=0;i<s.size();i++){
            ss+=s[i];
            if(ss.size()==k){
                mp[ss]++;
                ss.erase(0,1);
            }
        }
        if(mp.size()==pow(2,k))return true;
        else return false;
    }
};