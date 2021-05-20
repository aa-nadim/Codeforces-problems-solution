#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,count;
    float x;
    cin>>t;
    while(t--){
            count=0;
        cin>>n;
        unsigned long long int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        cin>>m;
        unsigned long long int q[m];
        for(int i=0;i<m;i++){
            cin>>q[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                x=(q[j]-p[i])/2.0;cout<<" X"<<x<<endl;
                if(ceil(x)==floor(x))
                    count++;
            }
        }
        cout<<count<<endl;
    }


    return 0;
}
