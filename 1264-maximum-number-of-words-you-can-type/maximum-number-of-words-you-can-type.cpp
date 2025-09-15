class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        string temp;
        int ans=0;
        for(int i=0;i<=text.size();i++)
        {
            if(text[i]==' ' || i==text.size())
            {
                bool c=false;
                for(auto ch:brokenLetters)
                {
                    if(temp.find(ch)!=string::npos)
                    {
                        c=true;
                        break;
                    }
                }
                temp="";
                if(!c)
                {
                    ans++;
                }
            }
            else
            {
                temp+=text[i];
            }
        }
        return ans;
    }
};