"""...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering......."""
a=[]
n=int(input())
k=int(input())

for i in range(0, n): 
    ele = int(input()) 
    a.append(ele) # adding the element
    
print(a)
k-=1
a.sort()
for i in range(0, n): 
    if i==k:
        print("K-th minimum element = ",a[i])
        break
        
a.sort(reverse=True)
for i in range(0, n):
    if i==k:
        print("K-th minimum element = ",a[i])
        break
