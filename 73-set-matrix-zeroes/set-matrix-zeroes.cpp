class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>mat(m,vector<int>(n,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    mat[i][j]=matrix[i][j];
                    for(int k=i;k<m;k++)
                    {
                        mat[k][j]=0;
                    }
                    for(int k=i;k>=0;k--)
                    {
                        mat[k][j]=0;
                    }
                    for(int k=j;k<n;k++)
                    {
                        mat[i][k]=0;
                    }
                    for(int k=j;k>=0;k--)
                    {
                        mat[i][k]=0;
                    }
                }
                else
                {
                    if(mat[i][j]==-1)
                    {
                        mat[i][j]=matrix[i][j];
                    }
                }
            }
        }
        matrix=mat;
    }
};