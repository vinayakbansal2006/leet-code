class Solution {
public:
    int minCost(int maxt, vector<vector<int>>& e, vector<int>& f) {
        int n=f.size();
        vector<vector<pair<int,int>>> g(n);
        for(auto &v:e) g[v[0]].push_back({v[1],v[2]}), g[v[1]].push_back({v[0],v[2]});
        vector<int> dist(n,INT_MAX);
        priority_queue<array<int,3>,vector<array<int,3>>,greater<>> pq;
        pq.push({f[0],0,0}); // cost,time,node
        while(!pq.empty()){
            auto [c,tm,u]=pq.top(); pq.pop();
            if(tm>maxt) continue;
            if(u==n-1) return c;
            if(dist[u]<=tm) continue;
            dist[u]=tm;
            for(auto &[v,w]:g[u]) pq.push({c+f[v],tm+w,v});
        }
        return -1;
    }
};
