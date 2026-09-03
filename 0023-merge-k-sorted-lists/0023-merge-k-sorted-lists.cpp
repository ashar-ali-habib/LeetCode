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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (!lists.size()) return nullptr;
        vector<int> elements;
        int size = 0;

        ListNode* head = nullptr;
        ListNode* temp2 = nullptr;
        for (int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];
            while(temp) {
                elements.push_back(temp->val);
                size++;
                temp = temp->next;
            }
        }

        if (elements.empty()) return nullptr;

        sort(elements.begin(), elements.end());

        head = new ListNode(elements[0]);

        temp2 = head;
        for (int i = 1; i < size; i++) {
            temp2->next = new ListNode(elements[i]);
            temp2 = temp2->next; 
        }
        return head;
    }
};