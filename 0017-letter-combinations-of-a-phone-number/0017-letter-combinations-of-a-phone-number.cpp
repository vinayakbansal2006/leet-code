class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string mapping[10] = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string current;

        backtrack(0, digits, mapping, current, ans);

        return ans;
    }

    void backtrack(int index, string& digits, string mapping[],
                   string& current, vector<string>& ans) {

        if (index == digits.size()) {
            ans.push_back(current);
            return;
        }

        string letters = mapping[digits[index] - '0'];

        for (char c : letters) {
            current.push_back(c);

            backtrack(index + 1, digits, mapping, current, ans);

            current.pop_back();
        }
    }

};