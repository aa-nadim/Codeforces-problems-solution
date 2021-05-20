"""...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering......."""
a=[]
n=int(input())
for i in range(0, n): 
    ele = int(input()) 
    a.append(ele) # adding the element
print(a)

max_a=-9000000000
min_a=9000000000

for i in range(0, n): 
    if a[i] > max_a: 
        max_a=a[i]
    if a[i] < min_a: 
        min_a=a[i]
print(max_a)
print(min_a)