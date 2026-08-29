class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        char temp;
        for(int i=0;i<n/2;i++){
            for(int j=n-i-1;j>=i;j--){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;

                break;
            }
        }
    }
};