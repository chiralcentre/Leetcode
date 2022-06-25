class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        def recursiveDFS(root):
            return 0 if not root else max(recursiveDFS(root.left) + 1,recursiveDFS(root.right) + 1)
        return recursiveDFS(root)
