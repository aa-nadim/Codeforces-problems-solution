///.................................///
///...BISMILLAHIR RAHMANIR RAHEEM...///
///.................................///
#include<bits/stdc++.h>
using namespace std;
/*1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0*/
int main()
{
    int col1=-1,col2=-1,row1,row2,sum1,sum2,sum3,sum4;
    sum1=sum2=sum3=sum4=0;
    int a[6][6];
    for(int i=0;i<6;i++){for(int j=0;j<6;j++){cin>>a[i][j];}}

    for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                if(a[i][j]!=0){
                    row1=i;col1=j;break;
                }
            }if(col1!=-1)break;
    }//cout<<row1<<"\t"<<col1<<endl;
    for(int i=row1;i<row1+3;i++){for(int j=col1;j<col1+3;j++){sum1+=a[i][j];}}      //cout<<sum1<<endl;

    for(int i=row1;i<row1+3;i++){for(int j=col1+3;j<6;j++){sum2+=a[i][j];}}         //cout<<sum2<<endl;

    for(int i=row1+3;i<6;i++){for(int j=0;j<6;j++){if(a[i][j]!=0){row2=i;col2=j;break;}}if(col2!=-1)break;}
    for(int i=row2;i<6;i++){for(int j=col2;j<col2+3;j++){sum3+=a[i][j];}}           //cout<<sum3<<endl;

    for(int i=row2;i<6;i++){for(int j=col2+3;j<6;j++){sum4+=a[i][j];}}              //cout<<sum4<<endl;

    int maxi=-1,b[4];
    b[0]=sum1;b[1]=sum2;b[2]=sum3;b[3]=sum4;
    for(int i=0;i<4;i++){
        if(b[i]>maxi)
            maxi=b[i];
    }
    cout<<maxi<<endl;
    return 0;
}

///...............Nadim.............///
///...........Alhamdulillah.........///





