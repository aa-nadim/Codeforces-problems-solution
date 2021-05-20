#include<iostream>
using namespace std;

int main()
{
    int n;
    string st1="ABC",st2="ABD";

    cin>>n;

    if(0<n && n<1000)
        cout<<"ABC"<<endl<<endl<<"The "<<n<<"-th round of AtCoder Beginner Contest is labeled as "<<st1<<n<<"."<<endl;
    else if(1000<=n && n<=1998)
        cout<<"ABD"<<endl<<endl<<"The "<<n<<"-th round of AtCoder Beginner Contest is labeled as "<<st2<<n<<"."<<endl;

    return 0;
}
