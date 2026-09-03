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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return head;

        ListNode* temp = head;
        int size = 0;

        while(temp) {
            size++;
            temp = temp->next;
        }

        temp = head;
        size -= n;

        while(size > 1) {
            size--;
            temp = temp->next;
        }

        if (!head->next && size == 0) {
            delete head;
            head = nullptr;
            return head;    
        }
        if (size == 0) {
            ListNode* nodeToBeDeleted = head;
            head = head->next;
            delete nodeToBeDeleted;
            return head;
        }
        ListNode* nodeToBeDeleted = temp->next;
        temp->next = temp->next->next;
        delete nodeToBeDeleted;
        return head;
    }
};