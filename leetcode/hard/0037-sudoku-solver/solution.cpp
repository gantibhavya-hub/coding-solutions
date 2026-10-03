class Solution {
public:
    bool isvalid(int i , int j ,  char c, vector<vector<char>>& board)
    {
        //check row
        for(int k=0;k<9;k++)
        {
            if(board[i][k]==c) return false;
        }
        //check clo
        for(int k=0;k<9;k++)
        {
            if(board[k][j]==c) return false;
        }
        //check 3x3
        int startx=i/3*3;
        int starty=j/3*3;
        for(int k=startx;k<startx+3;k++)
        {
            for(int l=starty;l<starty+3;l++)
            {
                if(board[k][l]==c) return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&board)
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++)
                    {
                        if(isvalid(i,j,c,board)){
                            board[i][j]=c;
                            if(solve(board)) return true;

                            board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
      solve(board);
    }
};