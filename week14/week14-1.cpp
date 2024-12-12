//week14-1.cpp 學習計畫 Linked List 第3題 兩數相加 最多100位數
//LeetCode 21. Merge Two Sorted Lists
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*ans=new ListNode();//準備好新的答案
        ListNode*now=ans;//現在要處理的node
        while(l1 != nullptr){//把list 1 都複製到ans的now裡
            now->next=new ListNode(l1->val);
            now = now->next;//換下一筆
            l1 = l1->next;//換下一筆
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