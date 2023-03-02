# 2. Valid Parentheses

In this problem, I used a stack to push each opening parentheses in to the stack, and when encountered a closing parentheses, we check if the current (or left-most, top of the stack) is the correct pair of the closing parentheses. If it is not, we return false. The code also returns true when there are no parentheses. 