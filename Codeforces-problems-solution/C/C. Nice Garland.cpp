#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v[3];
        int n;cin>>n;string s;cin>>s;
        for(int i=0;i<n;i++){   v[i%3].push_back(i);    }
        for(int i=0;i<3;i++){
        		//cout<<i<<" -> ";
        		for(int j=0;j<v[i].size();j++){
                    if(s[j])
        		}
                    cout<<v[i][j]<<' ';cout<<endl;
   	 	}

    return 0;
}
