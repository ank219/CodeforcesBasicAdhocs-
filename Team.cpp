#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,arr[3],counter=0,cc=0;
    cin>>n;
    while(n--)
    {
        for(int i=0;i<3;i++)
            {
                cin>>arr[i];
                if(arr[i]==1)
                    counter++;
            }
            if(counter>=2)
            {
                cc++;
            }
            counter=0;

    }
    cout<<cc;
}
