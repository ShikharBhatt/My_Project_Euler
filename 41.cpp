#include<iostream>
#include<vector>
using namespace std;

int main()
{
    uint64_t n=987654321,maxp,temp;
    vector<bool> num(n+1,true);
    uint64_t rem,ch[10]={0};
    
    int count=0,ans=1,flag=0;
    for(uint64_t i=2;i<n;i++)
    {
        if(num[i]==true)
        {
            for(uint64_t j=i*2;j<n;j=j+i)
                num[j]=false;
        }
    }
   
    for(uint64_t i=n-1;i>=2143;i--)
    {
        if(num[i]==true)
        {
           
            temp=i;
            while(temp!=0)
            {
                rem=temp%10;
                if(ch[rem]==1 || rem==0)
                {
                    flag=1;
                    break;
                }

                ch[rem]=1;
                count++;  
                temp=temp/10;  
            }

            if(flag==0)
            {
                for (int k=1;k<=count;k++)
                {
                    if(ch[k]==0)
                    {
                        flag=1;
                        break;
                    }
                }               
            }

            if(flag==0)
            {
                maxp=i;
                cout<<maxp<<endl;
                return 0;
            }
            
            for(int j=1;j<10;j++)
                ch[j]=0;

            flag=0;
            count=0;
        }
    }


}

/*Output :
7652413
*/