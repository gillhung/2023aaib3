# // week16-1b.cpp 無法通過，n會超大
class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        if(n>0){ // 用瘋狂程設寫法，但是n<0會失敗
            for(int i=1;i<=n;i++){
                ans*=x;
            }
        }
        if(n<0){ // 特別針對n<0用負負得正，換成倒過來的形式
            for(int i=1;i<=-n;i++){
                ans*=1/x;
            }
        }
        return ans;
    }
};