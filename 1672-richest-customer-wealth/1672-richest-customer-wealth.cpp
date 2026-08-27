class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        vector<int> total(n);
        int ans=0;
        for(int i=0;i<n;i++){
            total[i]=0;
            for(int j=0;j<accounts[i].size();j++){
                total[i] += accounts[i][j];
            }
        }
        for(int i = 0; i < n; i++) {
            if(total[i] > ans) {
                ans = total[i];
            }
        }
        return ans;

    }
};