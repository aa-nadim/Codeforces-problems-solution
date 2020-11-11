#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count;cin>>t;
    while(t--){
    double n,d,temp,a;
    cin>>n>>d;
    temp=sqrt(d);
    if(n>=d)
        cout<<"YES"<<endl;
    else if(d>n){
        count=0;
        for(int i=1;i<temp;i++){
            a=ceil(d/(i+1));
            if((i+a)<=n){
                count++;
                break;
            }
        }
        if(count==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }


    return 0;
}
