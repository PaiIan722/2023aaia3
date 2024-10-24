// week07-2a.cpp �ǲ߭p�e Simulation ��3�P ���r�C��
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
        int now = 1; //��1�ӤU���H,�s1:"A",2:"B"
        for(auto move : moves) { //��auto���|���A�g�n
            int i= move[0],j= move[1];
            board[i][j] = now;
            myPrintBoard(board);
            now = 3 - now; //1��2,2��1,1��2,2��1
        }
        return "A"; //�ӧQ���O��?
    }
};
