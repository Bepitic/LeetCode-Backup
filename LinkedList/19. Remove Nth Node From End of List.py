# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if head == None:
            return None
        if head.next == None and n == 1:
            return None
        if head.next == None and n == 0:
            return head
        

        p = head
        end = head

        for i in range(n):
            #print("end")

            end = end.next
        
        if end==None:
            return head.next

        while end.next != None:
            
            p = p.next
            end = end.next
            
        

        p.next = p.next.next

        return head
