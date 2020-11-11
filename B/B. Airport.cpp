///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const double pi = acos(-1.0);
///while(scanf("%d %d",&a,&b)!=EOF)
int main()
{
    int num,m;cin>>num>>m;
    int a[m],b[m];
    for(int i=0;i<m;i++){
        cin>>a[i];b[i]=a[i];
    }sort(a,a+m);
    int s=0,n=num;
    while(1){
        int i=0;

        s+=a[i];
        a[i]--;n--;
        if(n==0){
            break;
        }
        sort(a,a+m);
    }
    cout<<s<<endl;
    int sum=0;n=num;sort(b,b+m);
    while(1){
        int i=m-1;
        sum+=b[i];
        a[i]--;n--;
        if(n==0){
            cout<<sum<<" "<<s;return 0;
        }
        sort(b,b+m);
    }
}
