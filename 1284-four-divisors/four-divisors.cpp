class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto x:nums)
        {
            int div=2,sum=1+x;
            for(int i=2;i<=sqrt(x);i++)
            {
                if(x%i==0)
                {
                    sum+=i;
                    sum+=(x/i);
                    if(i==(x/i))
                    {
                        div++;
                    }
                    else
                    {
                        div+=2;
                    }
                }
            }
            cout << div << endl;
            if(div==4)
            {
                ans+=sum;
            }
        }
        return ans;
    }
};