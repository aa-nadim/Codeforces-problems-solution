#include<bits/stdc++.h>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test IOS long long t;cin >> t;while(t--)
using namespace std;

int main()
{
    int n;cin>>n;vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        vec.push_back(make_pair(a,i+1));
    }
    sort(vec.begin(),vec.end());
    int x=0,sum=0;
    for(int i=n-1;i>=0;i--){
      sum+=vec[i].first*x+1;x++;
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)cout<<vec[i].second<<" ";
    return 0;
}

