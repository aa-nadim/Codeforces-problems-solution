
#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n,sum=0,face=0;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         string s;
         cin>>s;
         if(s=="Tetrahedron")
            face=4;
         else if(s=="Cube")
            face=6;
         else if(s=="Octahedron")
            face=8;
         else if(s=="Dodecahedron")
            face=12;
        else if(s=="Icosahedron")
            face=20;

        sum=sum+face;
     }
   cout<<sum<<endl;
    return 0;
}
