
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

using namespace std;

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* current = new ListNode();
        ListNode* head = current;
        while (list1 != NULL && list2 != NULL){
            if (list1->val <= list2->val){
                current->next = list1;
                current = list1;
                list1 = list1->next;
            }
            else {
                current->next = list2;
                current = list2;
                list2 = list2->next;
            }
        }
        if (list1 != NULL || list2 != NULL){
            current->next = list1 != NULL ? list1 : list2;
        }
        return head->next;
    }
};