class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(l1, l2):
    dummy = ListNode()
    current = dummy
    carry = 0
    
    while l1 or l2 or carry:
        val1 = l1.val if l1 else 0
        val2 = l2.val if l2 else 0
        total = val1 + val2 + carry
        carry, digit = divmod(total, 10)
        
        current.next = ListNode(digit)
        current = current.next
        
        if l1: l1 = l1.next
        if l2: l2 = l2.next
    
    return dummy.next

def print_list(head):
    values = []
    while head:
        values.append(head.val)
        head = head.next
    print(values)

l1 = ListNode(2, ListNode(4, ListNode(3)))  
l2 = ListNode(5, ListNode(6, ListNode(4)))
sum_head = addTwoNumbers(l1, l2)
print_list(sum_head)
