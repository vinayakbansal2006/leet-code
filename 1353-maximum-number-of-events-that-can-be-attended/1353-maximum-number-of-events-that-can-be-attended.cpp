class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        sort(events.begin(), events.end());

        priority_queue<int, vector<int>, greater<int>> pq;

        int n = events.size();
        int i = 0;
        int day = 0;
        int ans = 0;

        while (i < n || !pq.empty()) {

            // If no active events, jump to the next event's start day
            if (pq.empty()) {
                day = events[i][0];
            }

            // Add all events that have started by today
            while (i < n && events[i][0] <= day) {
                pq.push(events[i][1]);
                i++;
            }

            // Remove events that have already expired
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }

            // Attend the event that ends earliest
            if (!pq.empty()) {
                pq.pop();
                ans++;
                day++;
            }
        }

        return ans;
    }
};