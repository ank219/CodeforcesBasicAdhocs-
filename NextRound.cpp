#include<bits/stdc++.h>
using namespace std;

int main()
{  int a=10;

  while(a--)
  {
    int n,k;
    cin>>n>>k;
    int arr[n],counter=0;

    for(int i=1;i<=n;i++)
           cin>>arr[i];

     if(arr[k]==0)
     {
         for(int i=1;i<=n;i++)

         {
             if(arr[i]>0)
                counter++;
         }

     }
    else
    {
     counter=k;

    for(int i=k+1;i<=n;i++)
    {
         if(arr[i]>=arr[k])
            counter+=1;
    }
    }
      cout<<counter;
  }

}
