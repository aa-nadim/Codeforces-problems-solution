#import<iostream>
using namespace std;
int l,p,r,x;
int H(int k){
    for(p=0;k;k/=10){
            if(p&1<<k%10)return 0;
    p|=1<<k%10;
    }
    return 1;
}
main()
{
        for(cin>>l>>r,x=l;r/x;x++)
            if(H(x)){
                cout<<x;return 0;
            }
        cout<<-1;
}
