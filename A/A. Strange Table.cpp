///................................Nadim.................................///
///..............Noakhali Science and Technology University..............///
///........Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int

int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    ll test;cin>>test;while(test--)
        {

            ll n,m,x;cin>>n>>m>>x;
            ll row,col,r;

            row=x%n;                //cout<<row<<endl;
            col=ceil((double)x/n);  //cout<<col<<endl;
            if(row!=0)row--;
            else row=n-1;
            r=row*m;              //cout<<r<<endl;
            cout<<r+col<<endl;

        }
return 0;
}

//1000000000000
//1000000000000
