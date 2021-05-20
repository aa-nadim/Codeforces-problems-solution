 #include<bits/stdc++.h>
using namespace std;
typedef long long v99;
const double pi=acos(-1.0);
#define MX 99999

vector<int>v;
map<int,int>mp;
map<int,int>::iterator it;

int main()
{
    int t;cin>>t;while(t--){
        v99 a,b,n;cin>>a>>b>>n;
        v99 x=0;
        while(1){
            if(a<=b) a+=b;
            else b+=a;
            x++;
            if(a>n || b>n)break;
        }
        cout<<x<<endl;
    }
    return 0;
}

