// week13-6
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; // 用陣列，存Linked List 的 val值
        while(head != nullptr){ // 只要還有東西
            a.push_back(head->val); // 就把值，先塞入陣列
            head = head->next; //　換下一個
        }
        ListNode * ans = new ListNode();　// 和前1題一樣的
        ListNode * now = ans; // 和前1題一樣的
        for(int i=a.size()-1;i>=0;i--){ // 反過來的陣列
            now->next = new ListNode(a[i]);
            now = now->next; // 換下一個
        }
        return ans->next; // 和前1題一樣的
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
