#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,count=0;cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;break;
        }
    }
    if(count==0)
        cout<<"Prime Number"<<endl;
    else
        cout<<"Not Prime Number"<<endl;

    return 0;
}
