/*
14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".


Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.


Constraints:

    1 <= strs.length <= 200
    0 <= strs[i].length <= 200
    strs[i] consists of only lowercase English letters if it is non-empty.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        else if (strs.size() == 1)
            return strs[0];

        string prefix = "";
        char current = strs[0][0];
        bool found = false;

        int i=1;
        int j=0;
        while (found==false && j<strs[0].size()) {
            if (strs[i][j] == current) 
                i++;
            else 
                found = true;   

            if (i == strs.size()) {
                prefix += current;
                current = strs[0][++j];
                i = 1;
            }
        }

        return prefix;
    }
};
