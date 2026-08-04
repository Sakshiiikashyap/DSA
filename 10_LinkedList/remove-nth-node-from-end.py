# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr = head
        l = 0
        while curr!=None:
            curr = curr.next
            l +=1
        if l == n:
            return head.next
        curr = head
        for i in range(l-n-1):
            curr = curr.next
        curr.next = curr.next.next
        return head
# 2pointer approach
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        p1 = head
        p2 = head
        for i in range(n):
            p2 = p2.next
        if p2==None:
            head = head.next
            return head
        while p2.next!=None:
            p2 = p2.next
            p1 = p1.next
        p1.next = p1.next.next
        return head