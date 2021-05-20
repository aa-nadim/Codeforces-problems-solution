#include<bits/stdc++.h>
using namespace std;
typedef long long v99;

int Myfun(int n,int c)
{
    c++;
    if(n==1) return c;
    if(n%2==1) return Myfun(3*n+1,c);
    if(n%2==0) return Myfun(n/2,c);
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int x=min(a,b);
        int y=max(a,b);
        int ans=0;
        while(x<=y){
            ans=max(ans,Myfun(x,0));
            x++;
        }
        cout<<a<<" "<<b<<" "<<ans<<endl;
    }
}
