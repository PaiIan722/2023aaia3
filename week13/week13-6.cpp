// week13-6.cpp 學習計畫 Linked List 第二題
// LeetCode 206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) {
        vector<int>a; //伸縮自如的陣列,裡面放val值
        while(head!=nullptr){ //還不是空的,就繼續做
            a.push_back(head->val); //塞入值
            head = head->next; //再處理下一筆
        }
        ListNode*ans=new ListNode();//準備答案
        ListNode*now=ans; //一筆一筆塞入
        int N=a.size();
        for(int i=N-1;i>=0;i--){ //倒過來的迴圈
            now->next=new ListNode(a[i]); //塞入倒過來的值
            now=now->next; //在處理下一筆
        }
        return ans->next;
    }
};