#include<iostream>
using namespace std;

bool check_bounds(int i,int j)
{
   return (i>=0 && i<20 && j>=0 && j<20);
      
}

int main()
{
   int max=0,arr[21][21],val=0;

    for(int i=0;i<20;i++)
        for(int j=0;j<20;j++)
            cin>>arr[i][j];

    for(int i=0;i<20;i++)
    {
        for(int j=0;j<20;j++)
        {
            if(check_bounds(i,j) && check_bounds(i,j+3))        // vertical
            {
                val=arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3];
                if(val>max)
                    max=val;
            }

            if(check_bounds(i,j) && check_bounds(i+3,j))        // horizontal
            {
                val=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
                if(val>max)
                    max=val;
            }
            
            if(check_bounds(i,j) && check_bounds(i+3,j+3))      // right diagonal
            {
                val=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
                if(val>max)
                    max=val;
            }

            if(check_bounds(i-3,j) && check_bounds(i,j+3))      //left diagonal
            {
                val=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
                if(val>max)
                    max=val;
            }
        }
    }    
    cout<<"Ans : "<<max<<endl;            
    return 0;
}

/*Output : 
70600674

*/