// week09-5.cpp 學習計畫 Math 第1題 (頭尾包含)範圍內,有幾個單數
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low)/2; //好像這個是答案,但有時候會小一點
        if(low%2==1 || high%2==1) ans++; //因為,如果頭尾有單數,要再加1個數
        return ans;
    }
};