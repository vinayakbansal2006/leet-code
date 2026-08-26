class Solution {
public:

    bool check(string s, vector<string>& wordDict, int pos, vector<int>& dp) {

        if (pos == s.length())
            return true;

        if (dp[pos] != -1)
            return dp[pos];

        for (int i = 0; i < wordDict.size(); i++) {

            string word = wordDict[i];

            if (s.substr(pos, word.length()) == word) {

                if (check(s, wordDict, pos + word.length(), dp)) {
                    return dp[pos] = true;
                }
            }
        }

        return dp[pos] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        vector<int> dp(s.length(), -1);

        return check(s, wordDict, 0, dp);
    }
};