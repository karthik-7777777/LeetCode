class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans=0,f=0;;
        sort(piles.rbegin(),piles.rend());
        for(int i=1;i<piles.size();i+=2)
        {
            if(f==piles.size()/3)
            {
                break;
            }
            ans+=piles[i];
            f++;
        }
        return ans;
    }
};