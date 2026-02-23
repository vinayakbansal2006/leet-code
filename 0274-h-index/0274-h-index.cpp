class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size(),h=0;
        sort(citations.begin(),citations.end());
        for(int i=0;i<n;i++){
            int paper=n-i;
            if(citations[i]>=paper){
                h=paper; 
                break;
            }
        }
        return h;
    }
};