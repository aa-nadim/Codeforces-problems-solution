#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t;cin>>t;
        while(t--){
            int x,y;cin>>x>>y;
            if(x==y)cout<<"YES"<<endl;

            else if(x>1){
                if(x%2!=0){
                    if(y>x)cout<<"NO"<<endl;
                    else if(x-1==y)cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
                }
            else if((3*x)/2==y || x-1==y || ((3*x)/2)-1==y)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            }
        }

        return 0;
    }
