class MinStack:

    def __init__(self):
        self.stack = []
        self.lowest = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        if not self.lowest or self.lowest[-1] >= val:
            self.lowest.append(val)   

    def pop(self) -> None:
        val = self.stack.pop()
        #note that lowest element cannot be removed from stack without removing from the stack of minimum elements
        if self.lowest[-1] == val:
            self.lowest.pop()        

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.lowest[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
