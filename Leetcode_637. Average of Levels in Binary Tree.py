# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Runtime: 88 ms, faster than 36.89% of Python3 online submissions for Average of Levels in Binary Tree.
# Memory Usage: 16.6 MB, less than 22.03% of Python3 online submissions for Average of Levels in Binary Tree.


class Solution:
    def averageOfLevels(self, root: Optional[TreeNode]) -> List[float]:
        if root is None:
            return []
        
        answer = [round(root.val, 5)]
        q = []
        
        if root.left != None:
            q.append(root.left)
        if root.right != None:
            q.append(root.right)
            
        while q != []:
            l = len(q)
            sum = 0
            for idx in range(l):
                sum += q[0].val
                if q[0].left != None:
                    q.append(q[0].left)
                if q[0].right != None:
                    q.append(q[0].right)
                q.pop(0)
            answer.append(round(sum/l, 5))
        return answer
            
            
        
