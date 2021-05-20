
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
int main()
{

    int r,x,y,x2,y2;
    cin>>r>>x>>y>>x2>>y2;

    if((x2-x) == (y2-y)){
        cout<<(x2-x)/r<<endl;
    }
    else if((x2-x) > (y2-y)){
        cout<<(x2-x)/r<<endl;
    }
    else if((x2-x) < (y2-y)){
        cout<<(y2-y)/r<<endl;
    }






    return 0;
}
