//week06-4.cpp 學習計畫 Simulation 第1題
//LeetCode 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s: operations){
            int N=a.size();//陣列a有N個數
            if(s=="+") a.push_back(a[N-1]+a[N-2]);
            else if(s=="D") a.push_back(a[N-1]*2);
            else if(s=="C") a.pop_back();
            else a.push_back( stoi(s) );
        }
        int ans=0; //最後把陣列全部加起來
        for(int b:a) ans+=b;
        return ans;
    }
};