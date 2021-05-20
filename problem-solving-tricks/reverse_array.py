"""...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering......."""
from array import *
def reverseList(A,start,end):
	while start<end:
		A[start],A[end]=A[end],A[start]
		start += 1
		end -= 1
A=[]
n=int(input())
for i in range(0, n): 
    ele = int(input()) 
    A.append(ele) # adding the element
print(A)


reverseList(A,0,n-1)
print("Reversed list is")
print(A)