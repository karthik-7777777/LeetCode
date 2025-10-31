class Solution {
public:
    vector<int> constructRectangle(int area) {
        int min=INT_MAX;
        vector<int>ans(2,0);
        for(int i=sqrt(area);i>=1;i--)
        {
            if(area%i==0)
            {
                int l=area/i;
                if(l-i <= min)
                {
                    min=i-l;
                    ans[0]=l;
                    ans[1]=i;
                }
            }
        }
        return ans;
    }
};