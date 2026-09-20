class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        // Sort by the ending value
        sort(pairs.begin(), pairs.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 0;
        int prevEnd = INT_MIN;

        for (auto& p : pairs) {
            int left = p[0];
            int right = p[1];

            // Current pair can follow the previous pair
            if (left > prevEnd) {
                count++;
                prevEnd = right;
            }
        }

        return count;
    }
};