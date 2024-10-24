// week07-1.cpp 學習計畫 Simulation 第3周 井字遊戲
// LeetCode 1275. Find Winner on a Tic Tac Toe Game
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //裡面都放0
        for(auto move : moves) { //用auto它會幫你寫好
            int i= move[0],j= move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A"; //勝利的是誰?
    }
};
