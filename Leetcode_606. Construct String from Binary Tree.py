# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def tree2str(self, root: Optional[TreeNode]) -> str:
        def preorder(node, answer) -> str:
            if node is None:
                return ""
            
            answer += str(node.val)
            if node.left is None and node.right is not None:
                answer += "()" + preorder(node.right, "")
            else:
                answer += preorder(node.left, "") + preorder(node.right, "")
            
            return "(" + answer + ")"
        
        return preorder(root, "")[1:-1]
