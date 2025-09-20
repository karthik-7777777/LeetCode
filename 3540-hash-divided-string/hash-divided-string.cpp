class Solution {
public:
    string stringHash(string s, int k) {
        string str="";
        int x=0;
        string alp="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<s.size();i+=k)
        {
            x=0;
            for(int j=0;j<k;j++)
            {
                x+=s[i+j]-'a';
            }
            x=x%26;
            str+=alp[x];
        }
        return str;
    }
};