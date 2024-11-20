// week11-7.cpp 學習計畫 Basic 第9題
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end()); // 小到大排好
        int N=arr.size(); // 共有N個數
        for(int i=0;i<N-2;i++){ // for迴圈，要-2，因為下面有i+2
            if(arr[i]-arr[i+1]!=arr[i+1]-arr[i+2]) return false;
        }
        return true;
    }
};