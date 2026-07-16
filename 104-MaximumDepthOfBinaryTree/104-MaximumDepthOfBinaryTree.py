# Last updated: 7/16/2026, 4:38:50 PM
# Definition for a binary tree node.
class TreeNode(object):
    def __init__(self, val=0, left=None, right=None):
         self.val = val
         self.left = left
         self.right = right

class Solution(object):
    def maxDepth(self, root):
        if root is None:
            return 0
        
        left_d = self.maxDepth(root.left)
        right_d = self.maxDepth(root.right)
        return 1 + max(left_d, right_d)
