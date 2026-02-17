class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0,actualsum,missingnumber;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        actualsum=nums.size()*(nums.size()+1)/2;
        missingnumber=actualsum-sum;
        return missingnumber;
    }
};