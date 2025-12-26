class Solution {
public:
    int pivotInteger(int n) {
        vector<int>x;
        for(int i=1;i<=n;i++)
        {
            x.push_back(i);
        }
        vector<int>pre(n);
        pre[0]=x[0];
        vector<int>suff(n);
        suff[n-1]=x[n-1];
        for(int i=1;i<n;i++)
        {
            pre[i]=x[i]+pre[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            suff[i]=x[i]+suff[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(pre[i]==suff[i])
            {
                return i+1;
            }
        }
        return -1;
    }
};