#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    int n,planks[100000],x;
    cin>>T;

    while(T--){

        cin>>n;
        for(int i=0;i<n;i++){
            cin>>planks[i];
        }
        sort(planks,planks+n);

        x=planks[n-2];

        if(x-1==0)
            cout<<0<<endl;
        else if(x-1 >= n-2)
            cout<<n-2<<endl;
        else if(x-1 < n-2)
            cout<<x-1<<endl;

    }

    return 0;
}
