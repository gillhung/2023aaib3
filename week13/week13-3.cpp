// week13-3.cpp 使用LeetCode 的 Playgound 遊樂場寫程式
// 右下角，有stdin 可輸入資料
int main() {
    int a,b;
    vector<int> A,B;
    while( cin >> a >> b ){
        A.push_back(a); // 把數字a 放入 陣列A
        B.push_back(b); // 把數字b 放入 陣列B
    }
    sort(A.begin(),A.end()); // 目標:把A從小到大排好
    sort(B.begin(),B.end()); // 目標:把B從小到大排好
    int ans=0;
    for(int i=0;i<A.size();i++){
        // cout << A[i] << " "; // 印出來，真的是「小到大排好」
        ans+=abs(A[i]-B[i]);// 相減，只取正的
    }
    cout << "加起來的答案是" << ans;
}