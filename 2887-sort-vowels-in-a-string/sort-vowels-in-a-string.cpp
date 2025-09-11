class Solution {
public:
    string sortVowels(string s) {
        string st;
        for(auto ch:s)
        {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            {
                st+=ch;
            }
        }
        sort(st.begin(),st.end());
        int x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                s[i]=st[x];
                x++;
            }
        }
        return s;
    }
};