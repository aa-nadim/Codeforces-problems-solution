#include<bits/stdc++.h>
using namespace std;
int arr[17000];

int main()
{
    int i,j,k=0,count1;
    for(i=2; i<=170000; i++){
        count1=0;
        for(j=2; j<=sqrt(i); j++){
            if(i%j==0){
                count1++;break;
            }
        }
        if(count1==0) arr[k++]=i;
    }
    int t,num;cin>>t;
    while(t--){
        cin>>num;
        cout<<arr[num-1]<<endl;
    }

    return 0;
}
