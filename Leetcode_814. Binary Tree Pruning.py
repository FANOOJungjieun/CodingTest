# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def pruneTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        def contains_one(node: TreeNode) -> bool:
            if not node: 
                return False
            
            left_contains_one = contains_one(node.left)
            right_contains_one = contains_one(node.right)
            
            if not left_contains_one: 
                node.left = None
            if not right_contains_one: 
                node.right = None
            
            # Return True if the current node or its left or right subtree contains a 1.
            return node.val or left_contains_one or right_contains_one

        # Return the pruned tree if the tree contains a 1, otherwise return None.
        return root if contains_one(root) else None
