///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    vector<int>::iterator it;
    int a,b,n,m,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum+=a;
        v.push_back(sum);
    }
    cin>>m;
    for(int j=0;j<m;j++){
        cin>>b;
        it=lower_bound(v.begin(),v.end(),b)-v;
        cout<<*it<<endl;
        cout<<distance(v.begin(),it+1)<<endl;
    }

}///...........Alhamdulillah.........///

