#!/usr/bin/python3
# importing the function from add_0.py file
from add_0 import add

# assigning values to variables a and b
a = 1
b = 2

# calling the add function with arguments a and b, and assigning the result to variable result
result = add(a, b)

# printing the result with string format
print("{} + {} = {}".format(a, b, result))

