///...............................GarbageValue..........................///
///.............Noakhali Science and Technology University..............///
///.......Department of Information and Communication Engineering.......///
#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;
#define    IOS            ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define    MX             1000000000
#define    fill(a,b)      memset(a,b,sizeof(a))
#define    REP(i,a,b)     for(int i = a; i <= b; i++)
#define    gcd(a,b)     __gcd(a,b)
#define    lcm(a,b)       (a*(b/gcd(a,b)))
#define    ll             long long int
#define    F              first
#define    S              second
#define    pb             push_back
#define    mp             make_pair
#define    pi             acos(-1)
#define    all(x)         x.begin(),x.end()
int main(){
#ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
#endif
    //ll test;cin>>test;while(test--)
        {

            string str;cin>>str;
            int n=str.length();
            string s="",s2="";
            for(int i=n-2;i<n;i++){
                s2+=str[i];
            }
            for(int i=0;i<n-2;i++){
                s+=str[i];
            }
            //cout<<s2<<endl;
            stringstream geek(s2);
            int x=0;geek>>x;    cout<<"Value of x : " << x;
            //if(n>3)cout<<"NO"<<endl;

            stringstream ge(s);
            int y=0;ge>>y;  cout<<"Value of y : " << y;


        }
return 0;
}

