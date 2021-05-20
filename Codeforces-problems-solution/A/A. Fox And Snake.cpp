#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,s=1;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i%2!=0)
                cout<<"#";
            else{
                if(i%4==0)
                {
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";

                }
                else
                {
                    //cout<<"j  "<<j<<endl;
                    if(j==m)
                        cout<<"#";
                    else
                        cout<<".";
                }

            }
             //s+=1;
        }

        cout<<endl;
    }
    return 0;
}
