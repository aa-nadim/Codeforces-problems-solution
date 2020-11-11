#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e2,f1,s1;
    cin>>a;cin>>b;cin>>c;cin>>d;cin>>f1;cin>>e2;
    if(f1>=e2){
        if(a>=d)
            cout<<d*f1<<endl;
        else{
            s1=(d-a);
            if(b>=c && c>=s1)
                cout<<(a*f1)+(s1*e2)<<endl;
            else if(b>=c && s1>c)
                cout<<(a*f1)+(c*e2)<<endl;
            else if(c>b && b>=s1)
                cout<<(a*f1)+(s1*e2)<<endl;
            else if(c>b && s1>b)
                cout<<(a*f1)+(b*e2)<<endl;
        }
    }
    else{
        if(b>=c && c>=d)
            cout<<d*e2<<endl;
        else if(b>=c && d>c){
            s1=d-c;
            if(a>=s1)
                cout<<(c*e2)+(s1*f1)<<endl;
            else
                cout<<(c*e2)+(a*f1)<<endl;
        }
        else if(b<c && b>=d)
            cout<<d*e2<<endl;
        else if(b<c && d>b){
            s1=d-b;
            if(a>=s1)
                cout<<(b*e2)+(s1*f1)<<endl;
            else
                cout<<(b*e2)+(a*f1)<<endl;
        }

    }

    return 0;
}
