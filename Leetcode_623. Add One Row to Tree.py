# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def addOneRow(self, root: Optional[TreeNode], val: int, depth: int) -> Optional[TreeNode]:
        
        if depth == 1:
            return TreeNode(val, root, None) # 예외처리
        
        q = collections.deque([root]) # bfs를 위한 큐 선언. 앞뒤로 자료를 넣고 뺄 수 있다.
        
        while depth != 1:
            depth -= 1 # 목표depth까지 진행
            size = len(q) # n번째 깊이의 노드들을 전부 선택.
            
            for _ in range(size):
                node = q.popleft()
                l, r = node.left, node.right
                
                if depth == 1: #목표 깊이에 도달했으면
                    node.left = TreeNode(val, l, None)
                    node.right = TreeNode(val, None, r)
                    #노드 추가
                    continue
                if l:
                    q.append(l)
                if r:
                    q.append(r) #자식 노드를 큐에 추가
        return root
        
        
