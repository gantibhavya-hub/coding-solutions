class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int r=0,c=0;
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        while(true)
        {
            visited[r][c]=true;
            int nr=r,nc=c;
            if(grid[r][c]=='R') nc++;
            else if(grid[r][c]=='L') nc--;
            else if(grid[r][c]=='U') nr--;
            else if(grid[r][c]=='D') nr++;
            if(nr<0 || nr>=n || nc<0 || nc>=m)
            {
                break;
            }
            if(visited[nr][nc]){
                break;
            }
            r=nr;
            c=nc;
        }
        return{r,c};
    }
};