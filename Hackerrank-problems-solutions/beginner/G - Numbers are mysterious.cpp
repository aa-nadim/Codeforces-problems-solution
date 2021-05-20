#include<iostream>
using namespace std;
int main()
{
    int i,n,j=0,val,num,sum=0;
    cin>>val;

    i=val;
    while(j!=1){
        num=i;

        while(num!=0){
            sum=sum+num%10;
            num=num/10;
        }

        if(sum%4==0){
            cout<<i<<endl;
            j++;
        }

    sum=0;
    i++;
    }

}

