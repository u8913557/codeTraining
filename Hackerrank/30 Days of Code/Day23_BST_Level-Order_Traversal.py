import sys

class Node:
    def __init__(self,data):
        self.right=self.left=None
        self.data = data
class Solution:
    def insert(self,root,data):
        if root==None:
            return Node(data)
        else:
            if data<=root.data:
                cur=self.insert(root.left,data)
                root.left=cur
            else:
                cur=self.insert(root.right,data)
                root.right=cur
        return root
		
def getHeight(self,root):
        left_height=0
        right_height=0
        
        if root is None:
            return -1
        else :
            if(root.left is not None):
                left_height = self.getHeight(root.left)+1
            
            if(root.right is not None):
                right_height = self.getHeight(root.right)+1
                
        return max(left_height, right_height)
    
    def printLevel(self,root, level):
        if(level == 0):
            print(root.data, end=" ")
        else:
            if(root.left != None):
                self.printLevel(root.left, level-1)
            if(root.right != None):
                self.printLevel(root.right, level-1)
    
    def levelOrder(self,root):
        level = self.getHeight(root)
        
        for i in range(level+1):
            self.printLevel(root, i)
    
    """
    def levelOrder(self,root):
        from collections import deque
        if root:
            queue = deque([root])
        while queue:
            node = queue.popleft()
            print(node.data, end=" ")
            if node.left:
                queue.append(node.left)
            if node.right:
                queue.append(node.right)              
    """  
	
T=int(input())
myTree=Solution()
root=None
for i in range(T):
    data=int(input())
    root=myTree.insert(root,data)
myTree.levelOrder(root)