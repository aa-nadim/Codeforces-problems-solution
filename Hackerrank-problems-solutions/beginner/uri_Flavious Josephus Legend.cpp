#include <bits/stdc++.h>
using namespace std;

int josephusLoop(int n, int k, int startingPoint)
{
    if(n == 1)
        return 1;

    int newSp, survivor;
    newSp = (startingPoint + k - 2) % n + 1;

    survivor = josephusLoop(n - 1, k, newSp);

    if(survivor < newSp){
        return survivor;
    }
    else{
        return survivor + 1;
    }
}

int josephus(int n, int k)
{
    return josephusLoop(n, k, 1);
}

int main()
{
        int T, n, k, s;
        cin>>T;

        for (int i = 1; i <= T; ++i){
            cin>>n>>k;
            s = josephus(n, k);
            cout<<"Case "<<i<<": "<<s<<endl;
        }

 return 0;
}
