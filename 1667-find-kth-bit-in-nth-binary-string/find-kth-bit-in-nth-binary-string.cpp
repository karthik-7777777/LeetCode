class Solution {
public:
string rev(string s)
{
    reverse(s.begin(),s.end());
    return s;
}
string inver(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s[i]='1';
        }
        else
        {
            s[i]='0';
        }
    }
    return s;
}
void NthBinary(int i,int n,vector<string> &str){
    if(i>n)
    {
        return;
    }
    string in=inver(str[i-1]);
    string r=rev(in);
    str[i]=str[i-1]+"1"+r;
    NthBinary(i+1,n,str);
}
    char findKthBit(int n, int k) {
        vector<string>str(n);
        str[0]="0";
        NthBinary(1,n-1,str);
        return str[n-1][k-1];
    }
};