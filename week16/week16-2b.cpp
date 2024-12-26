//week16-2b.cpp 學習計畫
//50. Pow(x, n)
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n<0){
            n=-n;
            x=1/x;
        }
        for(int i=0;i<n;i++){
            ans*=x;
        }
        return ans;
    }
};