class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    map<char, int> lastSeen ;
    int max_length = 0;
    int start = 0;
 
    for(int end = 0; end < s.length(); end++)
    {
        if (lastSeen.find(s[end]) != lastSeen.end())
        {
            start = max(start, lastSeen[s[end]] + 1);
        }
 
        lastSeen[s[end]] = end;
        max_length = max(max_length,
                             end - start + 1);
    }
    return max_length;  
    }
};