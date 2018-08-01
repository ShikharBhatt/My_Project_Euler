#include<iostream>
using namespace std;

int get_sum(int num)
{
    int sum=0;
    for(int j=1;j<(num);j++)
    {
        if(num%j==0)
        {
            sum=sum+j;
        }
    }
    return sum;
}

int main(){

    uint total=0,sum1;
    for(uint i=1;i<=10000;i++)
    {
        sum1=get_sum(i);

        if(sum1>i && get_sum(sum1)==i)
            total=total+i+sum1;
    }

    cout<<total<<endl;
    return 0;
}