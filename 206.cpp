#include<iostream>

using namespace std;

int main(){
    int64_t n=10101010,sq=0,rem=0;
    int flag=0;

    for(n;;n=n+10)
    {
        flag=0;
        if(n%100 == 0)
            continue;

        sq=(n*n)/100;
        for(int i=9;i>0;i--)
        {
            if(sq%10 == i)
            {
                sq=sq/100;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<n<<endl;
            break;
        }
        
    }
    return 0;
}