class Solution {
public:
    unordered_map<string,multiset<string>> g;
    vector<string> ans;
    void dfs(string u){
        while(!g[u].empty()){
            string v=*g[u].begin();
            g[u].erase(g[u].begin());
            dfs(v);
        }
        ans.push_back(u);
    }
    vector<string> findItinerary(vector<vector<string>>& t){
        for(auto &x:t) g[x[0]].insert(x[1]);
        dfs("JFK");
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
