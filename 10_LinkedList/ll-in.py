# create node
class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
node1 = Node(10)
node2 = Node(20)
node3 = Node(30)
node1.next = node2
node2.next = node3
head = node1
# print(head.data)
# print(head.next.data)

# travese in ll
def traverse(head):
    curr = head
    while curr!=None:
        print(curr.data, end=" ")
        curr = curr.next
# traverse(head)
# head-->10-->20-->30-->None

# insertion and deletion
# at begining
newNode = Node(4)
newNode.next = head
head = newNode
# head-->4-->10-->20-->30-->None
# traverse(head)

# at last
newNodee = Node(1)
curr = head
while curr.next!=None:
    curr = curr.next
curr.next = newNodee
# traverse(head)

# insertin at kth index
k = 2
newNode = Node(6)
curr = head
for i in range(k-1):
    curr = curr.next
newNode.next = curr.next
curr.next = newNode
# traverse(head)

# deletion first node
head = head.next
# traverse(head)

# delete last node
curr = head
while curr.next.next!=None:
    curr = curr.next
curr.next = None
# traverse(head)

# delete from kth node
curr = head
k = 2
for i in range(k-1):
    curr = curr.next
curr.next =curr.next.next
traverse(head)