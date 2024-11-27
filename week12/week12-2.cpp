// week12-2.cpp(還沒寫完)
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // ListNode* ans = list1; // 可以轉接過去
        // ListNode* ans = new ListNode(99); // 可開新(放99)
        ListNode*ans = new ListNode(99,new ListNode(90));
        // 開新的 Node 裡面放99，後面轉接「新的Node裡有90」
        return ans;
    }  
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
