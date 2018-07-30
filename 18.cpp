#include<iostream>
using namespace std;

int main()
{
    int a[15][15];
    for(int i=0;i<15;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            cin>>a[i][j];
        }
    }    
    
    for(int i=13;i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[i+1][j] >= a[i+1][j+1])
            {
                a[i][j]+=a[i+1][j];
            }
            else
                a[i][j]+=a[i+1][j+1];
        }
    }

    cout<<a[0][0]<<endl;
    return 0;
}

/*Output :  1074 
*/