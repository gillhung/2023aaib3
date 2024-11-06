// week09-1b.cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i=0, j=0,dir=0; // dir方向:0右,1下,2左,3上
        int dI[4] = {0,1,0,-1}; // 左手i的增減值
        int dJ[4] = {1,0,-1,0}; // 右手j的增減值
        vector<int> ans;

        for(int k=0;k<N-1;k++){
            ans.push_back(matrix[i][j]); // 把答案放入 ans
            i += dI[dir]; // 移動的值
            j += dJ[dir]; // 移動的值
        }
        dir=(dir+1)%4;

        for(int kk=1;kk<=M+1;kk++){
            for(int k=0;k<M-kk;k++){
                ans.push_back(matrix[i][j]); // 把答案放入 ans
                i += dI[dir]; // 移動的值
                j += dJ[dir]; // 移動的值
            }
            dir=(dir+1)%4;
            for(int k=0;k<N-kk;k++){
                ans.push_back(matrix[i][j]); // 把答案放入 ans
                i+=dI[dir]; // 移動的值
                j+=dJ[dir]; // 移動的值
            }
            dir=(dir+1)%4;
        }
        return ans;
    }
};