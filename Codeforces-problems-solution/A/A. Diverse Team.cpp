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
    map<int,int>mp;
    map<int,int>::iterator it;
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i+1;
    }
    if(k>mp.size())cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        int x=0,arr[k];
        for(it=mp.begin();it!=mp.end();++it){
            if(x>k)break;
            arr[x++]=it->second;
        }sort(arr,arr+k);
        for(int i=0;i<k;i++)cout<<arr[i]<<" ";cout<<endl;
    }
    return 0;
}



