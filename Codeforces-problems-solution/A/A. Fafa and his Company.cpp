#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count=1;
	cin>>n;

	if(n==1 || n==2){
		count=1;
	}
	else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
            }
        }
	}

	cout<<count<<endl;


	return 0;
}
