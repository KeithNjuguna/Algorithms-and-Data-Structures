class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def mergeTwoLists(list1, list2):
    dummy = ListNode()
    current = dummy
    
    while list1 and list2:
        if list1.val < list2.val:
            current.next = list1
            list1 = list1.next
        else:
            current.next = list2
            list2 = list2.next
        current = current.next
    
    current.next = list1 if list1 else list2
    
    return dummy.next

def print_list(head):
    values = []
    while head:
        values.append(head.val)
        head = head.next
    print(values)

list1 = ListNode(1, ListNode(3, ListNode(5)))
list2 = ListNode(2, ListNode(4, ListNode(6)))
merged_head = mergeTwoLists(list1, list2)
print_list(merged_head)
