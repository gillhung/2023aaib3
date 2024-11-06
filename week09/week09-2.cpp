// week09-2.cpp
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=(high-low)/2; // 這個方法是錯的
        if(low%2==1 || high%2==1) ans++; // 頭尾有奇數，就要+1
        return ans; 
    }
};