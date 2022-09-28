# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        
        tmp=ListNode(-1)
        tmp.next = head # 예외처리를 위해 -1인덱스의 값을 설정.
        
        
        p1 = tmp # 순회용 i번째 노드.
        p2 = tmp # i+n번째 노드. 이것은 i가 n번째일때 맨 끝을 가리키게 된다.
        
        for i in range(n):
            p2 = p2.next # p2를 i+n로 세팅

            
        while p2.next != None: # p2가 리스트 끝까지 갈 때까지 진행한다.
            p1 = p1.next
            p2 = p2.next
        
        p1.next = p1.next.next #중간의 링크를 끊는다.
        
        return tmp.next
        
        
