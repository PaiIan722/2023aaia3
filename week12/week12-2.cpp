// week12-2.cpp 學習計畫 Linked List 第1題 (未完成)
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
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //ListNode*ans = list1; //宣告答案,(1)亂接到list1
        //ListNode*ans = new ListNode(99); //(2)新增 值是99
        ListNode*ans = new ListNode(99,new ListNode(88));
        //(3) 新增1個值是99 且右邊又 新增1個值是90
        return ans; //練習認識一下資料結構 struct 相關的操作
    }
};