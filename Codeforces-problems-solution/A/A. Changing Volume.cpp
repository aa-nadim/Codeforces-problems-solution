#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--){
        long long int a,b,x1,x2,x3,y1,y2,temp;
        cin>>a>>b;
        if(a==b)cout<<0<<endl;
        else if(a<b){
            temp=b-a;
            x1=temp/5;y1=temp%5;
            x2=y1/2;y2=y1%2;
            x3=y2/1;
            cout<<x1+x2+x3<<endl;
        }
        else{
            temp=a-b;
            x1=temp/5;y1=temp%5;
            x2=y1/2;y2=y1%2;
            x3=y2/1;
            cout<<x1+x2+x3<<endl;
        }
    }



    return 0;
}
