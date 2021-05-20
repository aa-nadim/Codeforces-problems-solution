#include<bits/stdc++.h>
using namespace std;

int main() {

    int T,l;
    cin>>T;
    string n;

    while(T--){
    cin>>n;
    l =n.size();
    if(n[l-1]=='1'|| n[l-1]=='3' || n[l-1]=='5' || n[l-1]=='7' || n[l-1]=='9')
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;
    }

    return 0;
}
