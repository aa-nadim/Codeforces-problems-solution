///                       BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    ||''\   ||  ||\  /||
///                  || \ ||   /__\   ||   |  ||  || \/ ||
///                  ||  \||  /    \  ||../   ||  ||    ||
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const double pi = acos(-1.0);
///while(scanf("%d %d",&a,&b)!=EOF)
float dist(float x1, float y1, float x2, float y2) {
    float dx = x1-x2;
    float dy = y1-y2;
    return sqrt(dx*dx + dy*dy);
}
int main()
{
    int n,k=0;
    float r,a,b,c,d,x,y,s=0;
    cin>>n;cin>>r;
    cin>>a>>b;x=a;y=b;
    for(int i=0;i<n-1;i++){
        cin>>c>>d;
        s+=dist(a,b,c,d);
        a=c;
        b=d;
    }
    s+=dist(a,b,x,y);
    s+=2*pi*r;
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}


///string s;cin>>s;regex_match(s,regex("(1|14|144)*"))?cout<<"YES":cout<<"NO"; ///GNU C++11
///...........Alhamdulillah.........///

