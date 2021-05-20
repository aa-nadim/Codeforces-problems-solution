"""...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering......."""
import math,string,itertools,fractions,heapq,collections,re,array,bisect,sys,copy,functools
 
sys.setrecursionlimit(10**7)
inf = 10**20
eps = 1.0 / 10**10
mod = 10**9+7
dd = [(-1,0),(0,1),(1,0),(0,-1)]
ddn = [(-1,0),(-1,1),(0,1),(1,1),(1,0),(1,-1),(0,-1),(-1,-1)]
 
def LI(): return list(map(int, sys.stdin.readline().split()))
def LLI(): return [tuple(map(int, l.split())) for l in sys.stdin]
def LI_(): return [int(x)-1 for x in sys.stdin.readline().split()]
def LF(): return [float(x) for x in sys.stdin.readline().split()]
def LS(): return sys.stdin.readline().split()
def I(): return int(sys.stdin.readline())
def F(): return float(sys.stdin.readline())
def S(): return input()
def pf(s): return print(s, flush=True)


for TestCase in range(int(input())):
    a=b=c=0
    for n in range(int(input())):
        x = int(input())
        if x==0:
            a+=1
        elif x==1:
            b+=1
        else:
            c+=1
    for i in range(a):
        print(0,end=" ")
    for i in range(b):
        print(1,end=" ")
    for i in range(c):
        print(2,end=" ")
    print()


    
        
        