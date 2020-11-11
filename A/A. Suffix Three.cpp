#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string F="op",J1="usam",J2="used",K="adinm";
    int t,l;cin>>t;
    while(t--){
        string str,temp;
        //char temp[5];
        cin>>str;
        //reverse(str.begin(), str.end());
        l=str.size();
        for(int i=0;i<l;i++){
        //temp+=str[i];
        if(str[l]=='o')
            cout<<"FILIPINO"<<endl;
        else if(str[l]=='u')
            cout<<"JAPANESE"<<endl;
        else if(str[l]=='a')
            cout<<"KOREAN"<<endl;

        }
    }

    return 0;
}
