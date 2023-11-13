# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        lst = None
        point = None
        while list1 != None or list2 != None:
            mini = None
            if list1 != None and list2 != None:
                if list1.val < list2.val:
                    mini = list1.val
                    list1 = list1.next
                else:
                    mini = list2.val
                    list2 = list2.next

            elif list1 != None:
                mini = list1.val
                list1 = list1.next
            else:
                mini = list2.val
                list2 = list2.next

            # Creation of the return
            if lst == None:
                lst = ListNode(val=mini,next=None)
                point = lst
            else:
                point.next = ListNode(val=mini,next=None)
                point = point.next
        return lst