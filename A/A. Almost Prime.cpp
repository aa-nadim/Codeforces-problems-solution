#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector< int > vec;
    int i,k,arr[100];
     for(i=2,k=0;i<=100;i++){
        bool flag=true;
        for(int j=2;j<=i-1;j++){
            if(i%j==0){
                flag= false;
                break;
            }
        }
        if(flag==true){
            cout<<i<<" ";
            vec[k]=i;
        }
     }
     for(int k=0; k<vec.size(); k++){
        cout << vec[k] << "\t";
    }
}

