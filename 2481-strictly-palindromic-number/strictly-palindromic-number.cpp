class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int k=2;k<n-1;k++)
        {
            string bit="";
            int i=n;
            while(i)
            {
                int x=i%k;
                bit+=x;
                i=i/k;
            }
            int f=0,b=bit.size()-1;
            while(b>f)
            {
                if(bit[f]!=bit[b])
                {
                    return false;
                }
                else
                {
                    f++;
                    b--;
                }
            }
        }
        return true;
    }
};