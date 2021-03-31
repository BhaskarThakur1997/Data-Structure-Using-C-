
/* 
Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without repeating characters.
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
*/

#include "bits/stdc++.h"
using namespace std;

    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int maxLen = 0, start = -1;
        for(int i=0; i<s.size(); i++){
            if(dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }
        return maxLen;
    }
    int32_t main(){
        int test;
        cin>>test;
        for(int i=0; i<test; i++){
            string str;
            cin>>str;

            cout<<lengthOfLongestSubstring(str);
        }

    }