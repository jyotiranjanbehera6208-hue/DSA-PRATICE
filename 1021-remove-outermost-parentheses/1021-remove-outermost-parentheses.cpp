class Solution {
public:
    string removeOuterParentheses(string s) {
      string ans = "";
        int depth = 0;

        for (char ch : s) {

            if (ch == '(') {

                // Inner bracket hai
                if (depth > 0) {
                    ans += ch;
                }

                depth++;
            }
            else {

                depth--;

                // Inner bracket hai
                if (depth > 0) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};
