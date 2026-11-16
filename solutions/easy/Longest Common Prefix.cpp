// Title: Longest Common Prefix
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/longest-common-prefix/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        for(int i = 0; i<strs[0].size(); i++){
            for(int j = 1; j<strs.size(); j++){
                if(strs[j].size()==i || strs[0][i]!=strs[j][i]) return strs[0].substr(0, i);
            }
        }
        return "";
    }
        if(strs.size() == 1) return strs[0];
};
