# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def doubleIt(self, head):
        s=""
        curr=head
        while curr:
            s=s+str(curr.val)
            curr=curr.next
        n=int(s)
        n=n*2
        result = ListNode(None)
        current = result
        for char in str(n):
            new = ListNode(int(char))
            current.next = new
            current = current.next
        
    
        return result.next
        
        