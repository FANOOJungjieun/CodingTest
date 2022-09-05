"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
        
Runtime: 53 ms, faster than 94.36% of Python3 online submissions for N-ary Tree Level Order Traversal.
Memory Usage: 16.1 MB, less than 50.08% of Python3 online submissions for N-ary Tree Level Order Traversal.

"""

class Solution:
    def levelOrder(self, root: 'Node') -> List[List[int]]:
        if root == None : return []
        
        arr = []
        child = [root]
        
        while child:
            l = len(child)
            tmp = []
            for idx in range(l):
                tmp.append(child[0].val)
                for v in child[0].children : child.append(v)
                child.pop(0)
            arr.append(tmp)

        return arr
