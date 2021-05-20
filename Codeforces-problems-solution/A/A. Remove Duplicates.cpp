#include<bits/stdc++.h>
typedef long long v99;
using namespace std;
int main()
{
    v99 n;cin>>n;v99 a[n];
    map<v99,v99>mpp;
    vector<v99>vec;
    for(v99 i=0;i<n;i++) cin>>a[i];
    for(v99 i=n-1;i>=0;i--){
            if(mpp[a[i]]==0)vec.push_back(a[i]);
            mpp[a[i]]++;
    }
    cout<<vec.size()<<endl;
    for(auto it=vec.end();it!=vec.begin();){
        --it;cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}
