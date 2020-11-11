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
    test
    //while(1)
    {
        ll n;cin>>n;
        string s="First",s2="Second",str;
        ll a[n],b[n],sum=0;

        if(n%2)str=s;else str=s2;

        for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}sort(b,b+n);
        if(b[0]==b[n-1] || b[0]!=1)cout<<str<<endl;
        else{
            for(int i=0;i<n-1;i++){
                if(a[i]>1)a[i]=2;
            }a[n-1]=1;
            int e,odd;e=odd=0;
            for(int i=0;i<n;i++){
                if(a[i]>1){
                    if(i%2==0)odd++;
                    else e++;
                }
            }
            if(e>odd)str=s2;
            else if(e<odd)str=s;
            //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
            cout<<str<<endl;
        }


    }
    return 0;
}
