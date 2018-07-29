#include<iostream>
#include<cmath>
using namespace std;

int main()
{
uint n,count=0,sum=0;
n=0;
do
{
    n++;
    sum=sum+n;
    count=0;
    
for(uint i=1;i<=sqrt(sum);i++)
{
    if(sum%i==0)
    {
        if(sum/i==i)
        {
            //cout<<i<<"  ";
            count++;
        }
        else
        {
           // cout<<i<<"  "<<n/i<<"  ";
            count=count+2;
        }
    }
}

}while(count<=500);
cout<<endl<<sum<<endl<<count<<endl;

return 0;
}
