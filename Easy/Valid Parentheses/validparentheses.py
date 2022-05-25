class Solution:
    def isValid(self, s: str) -> bool:
        stack = []; parentheses = {"(":")", "[":"]", "{":"}"}
        for char in s:
            if char in parentheses: #if character is opening parenthesis
                stack.append(char)
            else: #closing parenthesis
                if stack and parentheses[stack[-1]] == char: #check if stack is empty
                    stack.pop()
                else: #parentheses do not match
                    return False
        #if there are leftover opening parentheses in the stack, the input stirng is not valid
        return False if stack else True
