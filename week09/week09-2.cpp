//week09-2.cpp 學習計畫第2題
//LeetCode 1572. Matrix Diagonal Sum
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int M = mat.size();
        int ans = 0;
        for(int i=0;i<M;i++){
            ans += mat[i][i]; //左上、右下
            ans += mat[i][M-1-i]; //右上、左下
        }
        //單數時,扣掉中間(兩個叉叉的交點)
        if(M%2==1) ans -= mat[M/2][M/2];
        return ans;
    }
};