//(LeetCoed二合一)
// week07-3b.cpp 學習計畫 Simulation 第4題
//LeetCode 1041. Robot Bounded In Circle 沒有跑出去的機器人
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        int x=0,y=0,dir=0; //方向direction 0:右 1:下 2:左 3:上
        for(char c :instructions ){
            if(c=='G') {
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir+3) % 4; //-1 倒過來轉,會有負數, +4
            if(c=='R') dir = (dir+1) % 4; //右、下、左、上、再右、...
        }
        if(x==0 && y==0) return true;
        else if(dir==0) return false;
        else return true;
    }
};
