#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define MX 99999
const double pi=acos(-1.0);
vector<int>v;

int main()
{
    int n;cin>>n;
    int i=n;
    while(1){
        int s=0,a=i;
        while(a!=0){
            s+=a%10;
            a/=10;
        }
        if(s%4==0){
            cout<<i<<endl;break;
        }
        i++;
    }


    return 0;
}

