#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c,sum;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        sum=0;
        for(int i=0;;i++){
             if(b==0)break;
        else if(b>0&&c>1) {
            sum+=3;
            b=b-1;c=c-2;
            }
        else if(a>0&&b>1) {
            sum+=3;
            a-=1;b-=2;
            }
        else
            break;
        }cout<<sum<<endl;
    }
    return 0;
}
