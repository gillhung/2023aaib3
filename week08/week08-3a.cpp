// week08-3a.cpp
//錯誤版本
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(),N=matrix[0].size();
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]){ // 錯誤版本(太多0互相汙染)
                    for(int ii=0;ii<M;ii++) matrix[ii][j]=0;
                    for(int jj=0;jj<N;jj++) matrix[i][jj]=0;
                }
            }
        }
    }
};