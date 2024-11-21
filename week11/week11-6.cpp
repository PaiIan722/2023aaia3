// week11-6.cpp 學習計畫第9題 照順序,相差都一樣
// LeetCode 1502. Can Make Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); //小到大排好
        int N = arr.size();
        for(int i=0;i<N-2;i++){ //迴圈慢慢測試
            if(arr[i]-arr[i+1] != arr[i+1]-arr[i+2]) return false;
        } //如果不相同,就失敗 
        //如果都沒有失敗,就是成功,開心
        return true;
    }
};