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
        int n;cin>>n;int a[n],odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2)odd++;
        }
        if(odd==0 || odd==n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

