//week11-5a.cpp 學習計畫 Basic 第8題
//1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int num : nums){
            ans *= num;
        }
        if(ans>0) return 1;
        else if(ans==0) return 0;
        else return -1;
    } //這個寫法,是錯的!
};