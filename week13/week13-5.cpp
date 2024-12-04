// week13-5.cpp 上週寫完，本週重寫
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * ans = new ListNode(); // 準備好新的 ListNode()
        ListNode * now = ans; // 現在只要處理的 ListNode 是 ans 往下走
        while(list1 != nullptr || list2 != nullptr ){ // 只要還有1個還有值
            if(list1==nullptr){ //list1是空的
                now->next = list2; // 舊街上list2
                list2 = nullptr ; // list2也清空
            }
            else if(list2 == nullptr){ // list2 是空的
                now->next = list1; // 就接上list1
                list1 = nullptr; // list1 就清空
            }
            else {
                if(list1->val < list2->val){ // 左邊小
                    now->next = new ListNode(list1->val);
                    list1 = list1->next;
                } 
                else{ // 加邊list2小
                    now->next = new ListNode(list2->val);
                    list2 = list2->next;
                }
                now = now->next;
                
                
            }
        }
        return ans->next;
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
