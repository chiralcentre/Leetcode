# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        pointer1,pointer2 = list1,list2
        current = ListNode(); head = current;
        while pointer1 and pointer2:
            if pointer1.val <= pointer2.val:
                current.next = pointer1
                current = pointer1
                pointer1 = pointer1.next
            else:
                current.next = pointer2
                current = pointer2
                pointer2 = pointer2.next
        if pointer1 or pointer2:
            current.next = pointer1 if pointer1 else pointer2
        return head.next
