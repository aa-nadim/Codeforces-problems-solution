#include<iostream>
using namespace std;
int main() {
   int x,s = 0,count=0,temp;
   cin >> x;
   while (x != 0) {
      count++;
      s = s + x % 10;
      x = x / 10;
   }temp=s/3;
   for(int i=1;i<=count;i++){
        if(i%2)
            cout<<temp-1;
        else
            cout<<temp+1;
   }
   cout<<s-2*temp<<endl;
}
