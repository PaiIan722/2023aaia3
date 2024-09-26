// week03-5.cpp 學習計畫第5題 判斷某個字串,是不是由重覆做出來的字串
// LeetCode 459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s; // 把它 copy 兩次
        int N = s2.length(); // 新的長度 N
        return s2.substr(1,N-2).find(s) !=string::npos;
    }
};