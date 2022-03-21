/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    string longestCommonPrefix(vector<string> &str)
    {

        int n = str.size();

        if (n == 0)
            return "";
        string ans = "";

        sort(str.begin(), str.end());

        string a = str[0];
        string b = str[n - 1];

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
                ans += a[i];
            else
                break;
        }
        return ans;
    }
};
// @lc code=end
