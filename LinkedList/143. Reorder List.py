# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        list = []
        while head != None:
            list.append(head)
            head = head.next
        if len(list)>1:
            l=1
            r=len(list)-1
            h= list[0]
            tickTack = False
            while l <= r:
                if tickTack:
                    list[l].next = None
                    h.next = list[l]
                    h = h.next
                    l +=1
                else:
                    list[r].next = None
                    h.next = list[r]
                    h = h.next
                    r -=1
                tickTack = not tickTack
        head = list[0]
