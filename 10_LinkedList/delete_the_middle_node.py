# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteMiddle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head.next is None:
            return None
        curr = head
        slow = fast = head
        i = 0
        while fast and fast.next:
            slow = slow.next
            fast =fast.next.next
            i += 1
        for i in range(i-1):
            curr = curr.next
        curr.next = slow.next
        return head