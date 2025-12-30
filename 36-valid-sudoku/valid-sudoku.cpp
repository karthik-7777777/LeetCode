class Solution {
public:
bool chk_brd(vector<vector<char>>& board,int r,int c)
{
    map<int,int>mp;
    for(int i=r;i<(r+3);i++)
    {
        for(int j=c;j<(c+3);j++)
        {
            if(board[i][j]=='.')continue;
            mp[board[i][j]]++;
            if(mp[board[i][j]]>1)
            {
                return false;
            }
        }
    }
    return true;
}
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i+=3)
        {
            for(int j=0;j<9;j+=3)
            {
                bool chk=chk_brd(board,i,j);
                if(chk==false)
                {
                    return false;
                }
            }
        }
        for(int i=0;i<9;i++)
        {
            map<int,int>mp1;
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')continue;
                mp1[board[i][j]]++;
                if(mp1[board[i][j]]>1)
                {
                    return false;
                }
            }
        }
        for(int i=0;i<9;i++)
        {
            map<int,int>mp2;
            for(int j=0;j<9;j++)
            {
                if(board[j][i]=='.')continue;
                mp2[board[j][i]]++;
                if(mp2[board[j][i]]>1)
                {
                    return false;
                }
            }
        }
        return true;
    }
};