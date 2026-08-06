# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseBetween(self, head, left: int, right: int):
        dummy = ListNode(0)
        dummy.next = head
        prev = dummy
        for i in range(left-1):
            prev = prev.next
        curr = prev.next
        reverseNode = None
        for i in range(right-left+1):
            nxt = curr.next
            curr.next = reverseNode
            reverseNode = curr
            curr = nxt
        leftNode = prev.next
        prev.next = reverseNode
        leftNode.next = curr
        return dummy.next
        