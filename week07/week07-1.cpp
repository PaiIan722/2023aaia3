// week07-1.cpp �ǲ߭p�e Simulation ��3�P ���r�C��
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
        int board[3][3] = {}; //�̭�����0
        for(auto move : moves) { //��auto���|���A�g�n
            int i= move[0],j= move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A"; //�ӧQ���O��?
    }
};
