// https://cplusplus.com/doc/tutorial/
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string s2=s+s; // s+s 再剪掉頭尾
        int N=s2.length();
        // cout << string::npos
        return s2.substr(1,N-2).find(s)!=string::npos; // npos對應:沒有這個位置、很大很大
    }   // substr()切字串 左扣1 右扣1(本來是0...N-1 現在變成1...N-2)
};