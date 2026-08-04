# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
# brute
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        cnt = 0
        while curr!=None:
            curr = curr.next
            cnt += 1
        curr = head
        for i in range(cnt//2):
            curr = curr.next
        return curr

# fast and slow concept