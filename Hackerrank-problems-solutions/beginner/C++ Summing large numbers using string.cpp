#include<bits/stdc++.h>
#include<stdio.h>
#define st string
using namespace std;
int main()
{
    st s1,s2,s3;
    int s[100000];
    char a;

    int n,b,c,e,len1,len2,sum=0,div,h,d,w=0,op;
    cin>>n;
    getchar();
    for(int op=1; op<=n; op++)
    { w=0;
        sum=0;
        getline(cin>>ws,s1);
        getline(cin>>ws,s2);

        len1=s1.size();
        len2=s2.size();

        if(len1<=len2)
        {
            h=len1;
            len1=len2;
            len2=h;
             s3=s1;
             s1=s2;
             s2=s3;


        }


        for(int i=len1-1,j=len2-1; j>=0; j--)
        {
            sum=sum+s1[i]+s2[j]-96;
            d=sum;
            if(sum>=10)
            {
                sum=sum/10;
                div=d%10;
                s[w]=div;
            }
            else
            {
                s[w]=sum;
                sum=0;
            }
            i--;
            w++;


        }
        for(int p=len1-len2-1; p>=0; p--)
        {
            sum=sum+s1[p]-48;
            d=sum;
            if(sum>=10)
            {
                sum=sum/10;
                div=d%10;
                s[w]=div;
            }
            else
            {
                s[w]=sum;
                sum=0;
            }
            w++;
        }

        if(sum>0)
        {
            s[w]=sum;
            w++;

        }
        cout<<"Case "<<op<<": ";

        for(int f=w-1; f>=0; f--)
        {
           printf("%d",s[f]);
        }
        cout<<endl;
    }

return 0;

}
