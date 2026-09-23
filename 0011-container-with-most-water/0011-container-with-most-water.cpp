class Solution {
public:
    int maxArea(vector<int>& hgts) {
        int n=hgts.size();
        int maxwater=0;
        int i=0;
        int j=n-1;
        while(i<j){
            int width=j-i;
            int height=min(hgts[i],hgts[j]);
            int area=width*height;
            maxwater=max(area,maxwater);
            if(hgts[i]<hgts[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxwater;
    }
};