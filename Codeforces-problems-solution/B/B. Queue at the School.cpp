/***********************************||
/***********************************||
/**   BISMILLAHIR RAHMANIR RAHEEM   ||
/**               Nadim             ||
/**           Dept of ICE           ||
/**               NSTU              ||
/**_________________________________||
/***********************************||
/************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,temp;
    string str;
    cin>>n>>t;
    cin>>str;
    while(t--){
        for(int i=0;i<n;i++){
            if(i<n-1 && str[i]=='B' && str[i+1]!='B'){
                temp=str[i+1];
                str[i+1]=str[i];
                str[i]=temp;
                i++;
            }
        }
    }
    cout<<str<<endl;
}
///Alhamdulillah............
