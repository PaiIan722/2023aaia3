// week03-4.cpp 學習計畫第3題 大海撈針 在haystack裡 找 needle
// LeetCode 28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        //https://cplusplus.com/reference/string/string/find/
        return haystack.find(needle);
    }
};