/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
#include<cstring>
#include<cmath>
#include<iterator>
#include<cstdlib>
#define IOS   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mxi 99999
using namespace std;

typedef long long ll;

int main()
{
    int n;cin>>n;
    int a[n][n],sum=0;
    int t,r1,r2,c1,c2;
    t=((n-1)/2)-1;
    r1=0;c1=t;
    r2=c2=t+2;
    int s1,s2,p,q;
    s1=s2=0;p=0;q=n-1;

    bool nadim=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            sum+=a[i][j];
            if(i==r1&&j==c1&&r1<=t){
                s1+=a[i][j];
                c1--;
            }
            else if(i==r1&&j==c2&&r1<=t){
                s1+=a[i][j];
                r1++;c2++;
            }
            else if(i==r2&&j==p&&nadim==true){
                s2+=a[i][j];
                p++;nadim=false;
            }
            else if(i==r2&&j==q){
                s2+=a[i][j];
                r2++;q--;
                nadim=true;
            }

        }
    }
   //cout<<s1<<"\t"<<s2<<endl;
    if(n<5)
        cout<<sum<<endl;
    else{
        sum=sum-(s1+s2);
        cout<<sum<<endl;
    }
    //cout<<sum<<endl;




    return 0;
}
///Alhamdulillah............

