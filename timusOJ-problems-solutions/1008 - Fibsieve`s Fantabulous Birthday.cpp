#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int num,a,b,c,row,col,temp;
    double x;
    int t,i;cin>>t;
    for(i=1;i<=t;i++){
        cin>>num;
        x=sqrt(num);
        a=ceil(x);                  //cout<<a<<endl;
        b=a-1;                      //cout<<b<<endl;
        temp=a*a-b;                 //cout<<temp<<endl;
        if(num==temp){row=a;col=a;}
        else if(num<temp){
            c=temp-num;
            if(a%2!=0){row=a-c;col=a;}
            else{row=a;col=a-c;}
        }
        else if(num>temp){
            c=num-temp;
            if(a%2!=0){row=a;col=a-c;}
            else{row=a-c;col=a;}
        }
        cout<<"Case "<<i<<": "<<col<<" "<<row<<endl;
    }
    return 0;
}
