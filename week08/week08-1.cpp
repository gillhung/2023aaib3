class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0; // 最多錢的有錢人，有「多少錢」?
        for(auto a : accounts){ //從一堆人，挑出1個人a
            int sum = 0; // 迴圈前面，sum是0
            for(auto b : a){ // a[0] + a[1] +a[2] + ...
                sum+=b; // 迴圈中間 sum += b 越加越多
            } // 迴圈後面，看這個人的存款數，是否更有錢
            if(sum>ans) ans = sum; // 更有錢，就更新 ans
        }  
        return ans; // 迴圈後面 ans 拿來用
    }
};