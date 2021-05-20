#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,fo,th,to,on,result;
    cin>>n;
    int arr[n];
    fo=th=to=on=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==4)
            fo++;
        else if(arr[i]==3)
            th++;
        else if(arr[i]==2)
            to++;
        else
            on++;
    }
    if(th>=on){
        if(to%2==0){
            result=(fo+th)+to/2;
            cout<<result<<endl;
        }
        else{
            result=(fo+th)+(to/2)+1;
            cout<<result<<endl;
        }
    }
    else{
        if(to%2==0){
            result=(fo+th)+(to/2)+(on-th)/4;
            if((on-th)%4==0)
                cout<<result<<endl;
            else
                cout<<result+1<<endl;
        }
        else{
            result=(fo+th)+(to/2)+(on-th+2)/4;
            if((on-th+2)%4==0)
                cout<<result<<endl;
            else
                cout<<result+1<<endl;
        }


    }


    return 0;
}
