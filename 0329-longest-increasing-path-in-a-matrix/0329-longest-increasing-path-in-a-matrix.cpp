class Solution {
public:
    int m,n;
    vector<vector<int>> mem;
    int dfs(vector<vector<int>>& a,int i,int j){
        if(mem[i][j]) return mem[i][j];
        int res=1;
        for(auto [dx,dy]: vector<pair<int,int>>{{0,1},{1,0},{0,-1},{-1,0}}){
            int x=i+dx,y=j+dy;
            if(x>=0 && x<m && y>=0 && y<n && a[x][y]>a[i][j])
                res=max(res,1+dfs(a,x,y));
        }
        return mem[i][j]=res;
    }
    int longestIncreasingPath(vector<vector<int>>& a){
        m=a.size(),n=a[0].size();
        mem=vector<vector<int>>(m,vector<int>(n,0));
        int ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                ans=max(ans,dfs(a,i,j));
        return ans;
    }
};
