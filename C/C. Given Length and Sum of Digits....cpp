#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s,t,temp;cin>>m>>s;
    int a[m];
    if(m==1 && s<10) cout<<s<<" "<<s<<endl;
    else if(m*9<s || s<1) cout<<"-1 -1"<<endl;
    else{
        int i=0;t=m-1;
        while(t--){
            if(s>9){
                a[i++]=9;
                s-=9;
            }
            else{
                a[i++]=s;
                s=0;
            }
        }a[i++]=s;
        if(a[m-1]==0){
            for(int i=m-1;i>0;i--){
                if(a[i]==0&&a[i-1]!=0){
                   temp=i-1;//cout<<temp<<endl;
                   break;
                }
            }
            for(int i=m-1;i>=0;i--){
                if(i==m-1) cout<<1;
                else if(i==temp) cout<<a[i]-1;
                else cout<<a[i];
            }cout<<" ";
        }
        else{
            for(int i=m-1;i>=0;i--) cout<<a[i];
            cout<<" ";
        }
        for(int i=0;i<m;i++) cout<<a[i];
        cout<<endl;

    }
    return 0;
}


///...........Alhamdulillah.........///
