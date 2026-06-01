class Solution {
public:
    int maximalSquare(vector<vector<char>>& mat) {
        int n=mat.size(),m=mat[0].size();
        vector<vector<int>>dp(n,vector(m,0));
        int chk=0;
        for(int i=0;i<n;i++){
            if(mat[i][0]=='1'){
                dp[i][0]=1;
                chk=1;
            }
            else dp[i][0]=0;
        }
        for(int i=0;i<m;i++){
            if(mat[0][i]=='1'){
                dp[0][i]=1;
                chk=1;
            }
            else dp[0][i]=0;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(mat[i][j]=='1'){
                    if(dp[i-1][j-1]>0 && dp[i-1][j]>0 && dp[i][j-1]>0){
                        dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
                    }
                    else{
                        dp[i][j]=1;
                    }
                }
                else{
                    dp[i][j]=0;
                }
                chk=max(chk,dp[i][j]);
            }
        }
        cout << chk ;
        return pow(chk,2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna