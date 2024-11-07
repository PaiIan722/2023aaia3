//week09-1.c 學計畫第1題
//LeetCode 1672. Richest Customer Wealth
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int M = accountsSize;
    int N = accountsColSize[0];
    int ans = 0;
    for(int i=0;i<M;i++){
        int total=0;
        for(int j=0;j<N;j++){
            total += accounts[i][j];
        }
        if(total>ans) ans=total;
    }
    return ans;
}