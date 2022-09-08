# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Runtime: 66 ms, faster than 7.72% of Python3 online submissions for Binary Tree Inorder Traversal.
# Memory Usage: 13.8 MB, less than 96.73% of Python3 online submissions for Binary Tree Inorder Traversal.
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def inorder(node, l) -> List[int]:
            if node is None:
                return
            
            inorder(node.left, l)
            l.append(node.val)
            inorder(node.right,l)
            return l
        return inorder(root,[])
