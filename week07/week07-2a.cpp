// week07-2.cpp 還沒完成的LeetCode 學習計畫 ，只做讀2D陣列、模擬(1、2兩人)、畫2D陣列
class Solution {
public:
    void myDrawBoard(int board[3][3]){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << board[i][j] << " ";
            }
            cout <<　endl;
        }
        cout << endl;
    }

    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; // step3: C的陣列，裡面都放0代表沒有人放東西
        int now = 1; // 1,2,1,2,(把 now =  - now 就會跳動了)
        myDrawBoard(board);
        for(auto move : moves){ // step1: C++進階迴圈
            int i = move[0] , j = move[1]; // step2: 取出陣列裡的值
            board[i][j]=now;
            myDrawBoard(board);
            now = 3 - now;
        }
        return "B"; // "A" or "B" ot "Draw"平手
    }
};