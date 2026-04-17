class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        for(int i=0;i<matrix.size();i++){
            int x=0,l=0,r=n-1;
            while(l<r){
                x=x+matrix[i][l]+matrix[i][r];
                l++;
                r--;
            }
            if(n%2==1){
                x+=matrix[i][n/2];
            }
            ans.push_back(x);
        }
        return ans;
    }
};