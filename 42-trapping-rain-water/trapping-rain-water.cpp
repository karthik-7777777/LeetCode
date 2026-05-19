class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int li=0,ri=height.size()-1;
        while(li<ri){
            if((height[li]==height[li+1]) || (height[li+1]-height[li]==1))li++;
            else break;
        }
        while(li<ri){
            if((height[ri]==height[ri-1]) || (height[ri-1]-height[ri]==1))ri--;
            else break;
        }
        if(li>=ri)return 0;
        for(int i=li;i<=ri;i++){
            int lm=0,rm=0;
            for(int l=i;l>=0;l--){
                lm=max(lm,height[l]);
            }
            for(int r=i;r<height.size();r++){
                rm=max(rm,height[r]);
            }
            ans+=(min(lm,rm)-height[i]);
        }
        return ans; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna