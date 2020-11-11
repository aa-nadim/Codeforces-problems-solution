#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--){
        int c,sum,temp,r,s,p;
    cin>>c>>sum;
    int ci[c];
    if(c==1)
        cout<<sum*sum<<endl;
    else if(sum==1)
        cout<<1<<endl;
    else{
            temp=0;
        if(sum%c==0){
            for(int i=0;i<c;i++){
                s=sum/c;
                temp=temp+s*s;
            }cout<<temp<<endl;
        }
        else{s=sum/c;
        r=sum%c;temp=0;
            for(int i=0;i<c;i++){
                ci[i]=s;
            }
            for(int i=0;i<r;i++){
                p=s+1;
                ci[i]=p;
            }
            for(int i=0;i<c;i++){
                temp=temp+ci[i]*ci[i];
            }cout<<temp<<endl;
        }
    }
    }

    return 0;
}

