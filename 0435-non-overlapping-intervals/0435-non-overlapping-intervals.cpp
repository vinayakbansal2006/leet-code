class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // Sort by ending time
        sort(intervals.begin(), intervals.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[1] < b[1];
             });

        int removals = 0;
        int prevEnd = INT_MIN;

        for (auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];

            if (start >= prevEnd) {
                // No overlap, keep the interval
                prevEnd = end;
            } else {
                // Overlap, remove this interval
                removals++;
            }
        }

        return removals;
    }
};