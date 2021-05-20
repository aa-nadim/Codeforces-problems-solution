///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    |''\   ||  ||\  /||
///                  || \ ||   /__\   |   |  ||  || \/ ||
///                  ||  \||  /    \  |../   ||  ||    ||
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string str;cin>>str;
    int arr[n],count=0,k=0;
    for(int i=0;i<n-1;i++){
        if(str[i]=='B'&&str[i+1]=='B') count++;

        else if(str[i]=='B'&&str[i+1]=='W'){
            count++;arr[k++]=count;           //cout<<count<<"\t";
            count=0;
        }
    }
    if(str[n-1]=='B'){
        count++;arr[k++]=count;                //cout<<k<<endl;
    }
    if(k==0) cout<<0<<endl;
    else{
        cout<<k<<endl;
        for(int j=0;j<k;j++)
            cout<<arr[j]<<" ";
        cout<<endl;
    }
    return 0;
}


///...........Alhamdulillah.........///







