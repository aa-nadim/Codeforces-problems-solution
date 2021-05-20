# Code to find top 3 elements and their counts 
# using most_common 
from collections import Counter 
  
arr = [1, 3, 4, 1, 2, 1, 1, 3, 4, 3, 5, 1, 2, 5, 3, 4, 5] 
counter = Counter(arr) 
top_three = counter.most_common(3) 
print(top_three[0]) 
print(top_three) 
for i in top_three:
    print(i)
