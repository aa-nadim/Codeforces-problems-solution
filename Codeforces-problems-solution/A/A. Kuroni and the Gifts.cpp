/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**              Nadim              ||
/**         Dept of ICE,NSTU        ||
/***********************************||
/************************************/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        bool flag=true;
        int n,temp,te;cin>>n;
        int x[n],y[n],t1[n],t2[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
            t1[i]=x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
            t2[i]=y[i];
        }
        sort(t1,t1+n);
        sort(t2,t2+n);
        int q=0;
        for(int i=0;i<n-1;i++){
            for(int j=n-1;j>0;j--){
                if((x[i]+y[i])==(x[j]+y[j])){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true){
            for(int i=0;i<n;i++){
                cout<<x[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<n;i++){
                cout<<y[i]<<" ";
            }cout<<endl;
        }
        else{
            for(int i=1;i<n/2;i++){
                cout<<t1[i]<<" ";
            }cout<<x[0]<<" ";
            for(int i=n-1;i>=n/2;i--){
                cout<<t1[i]<<" ";
            }
            cout<<endl;

            for(int i=n-1;i>=0;i--){
                cout<<t2[i]<<" ";
            }cout<<endl;
        }

    }
    return 0;
}
///Alhamdulillah............

