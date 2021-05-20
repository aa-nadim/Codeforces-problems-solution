#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define MX 99999
#define ws   " "
const double pi=acos(-1.0);
int main(){
#ifdef _DEBUG
        freopen("input.txt", "r", stdin);
//	    freopen("output.txt", "w", stdout);
#endif
    //test
    //while(1)
    {
        int  n;cin>>n;
        int a[n],odd=0,e;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2)odd++;
        }sort(a,a+n);e=n-odd;
        int x=min(e,odd);
        int y=max(e,odd);
        int t=y-x,s;t--;
        if(x==y || x+1==y)s=0;
        else{
            if(e>odd){
                s=0;
                for(int i=0;i<n;i++)
                    if(a[i]%2==0 && t>0)s+=a[i],t--;
            }
            else{
                s=0;
                for(int i=0;i<n;i++)
                    if(a[i]%2 && t>0)s+=a[i],t--;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}

