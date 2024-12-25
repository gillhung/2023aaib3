// week16-2.cpp 函式呼叫函式，簡化問題
class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0) return 1;
        if(n<0){ // 遇到負的n，那就負負得正，同時把x變成分母
            n=-n;
            x=1/x; // 因為x的-1次方，是1/x
        }
        if(n%2==0){
            double now = myPow(x,n/2); // 一半的x相乘
            return now*now; // 左一半，右一半，再相乘
        }
        else{ // 奇數個相乘
            double now = myPow(x,n/2);
            return now * now * x;
        }


        /*double ans=1;
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
        return ans;*/
    }
};