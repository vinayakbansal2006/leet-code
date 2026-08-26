class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cs=g.size();
        int cos=s.size();
        int j=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int count=0;
                
        for(int i=0;i<cs && j<cos; ){
            
            if(s[j]>=g[i]){
                count++;
                j++;
                i++;
            }
            else{
                j++;
            }
            
        }

        return count;
    }
};