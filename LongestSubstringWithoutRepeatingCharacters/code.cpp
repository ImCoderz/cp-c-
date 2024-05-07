#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    if (s.empty())
        return 0;
    
    int maxLength = 0;
    int start = 0;
    unordered_map<char, int> charIndexMap; // Map to store the last index of each character
    
    for (int end = 0; end < s.length(); ++end) {
        if (charIndexMap.find(s[end]) != charIndexMap.end() && charIndexMap[s[end]] >= start) {
            start = charIndexMap[s[end]] + 1;
        }
        
        charIndexMap[s[end]] = end;
        maxLength = max(maxLength, end - start + 1);
    }
    
    return maxLength;
}
};
