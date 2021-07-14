/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int findmajority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
        else
        count--;
        if(count==0)
        {
            res=i;
            count=1;
        }
        
    }
    count=0;
    for(int i=0;i<n;i++)
      if(arr[res]==arr[i])
        count++;
    if(count<=n/2)
      res=-1;
    return res;
}

int main()
{
   int n,x;
   int arr[10]={6,8,4,8,8,8,8};
   n=(sizeof(arr))/sizeof(arr[0]);
   x=findmajority(arr,n);
   cout<<x;
   
   

    return 0;
}
