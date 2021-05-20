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
    string str,s="",c="";
    int temp=0;
    cin>>str;int i=0;
    if(str.size()<3)
        return cout<<str<<endl,0;
    for(i=0;i<str.size()-2;){
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=3;
            s.push_back(' ');
        }
        else{
            s.push_back(str[i]);
            i++;
        }
    }
    if(i==str.size()-2){s+=str[str.size()-2];s+=str[str.size()-1]; }
    if(i==str.size()-1){s+=str[str.size()-1];}
    //cout<<s<<endl;
    for( i=0;i<s.size();){
            if(s[i]==' ' && i==0)
                {
                    while(s[i]==' ')
                        i++;
                }
           else if(s[i]!=' '){
                c+=s[i];i++;}
            else{
                c.push_back(' ');
                //i++;
                while(s[i]==' ')
                    i++;
            }
            //cout<<i<<endl;
    }
    cout<<c<<endl;
   // cout<<endl;
}
///Alhamdulillah............
