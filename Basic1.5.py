# Write a Python program which accepts a sequence of comma-separated numbers from user and generate a list and a tuple with those numbers.
n=input()
l=n.split(',')
t=tuple(l)
print("List: ",l)
print("Tuple: ",t)
