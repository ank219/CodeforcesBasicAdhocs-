#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     while(n--)
     {
       char S[100];
      scanf("%s",S);
       int k=strlen(S);
       if(k>10)
       cout<<S[0]<<k-2<<S[k-1]<<endl;
       else
        puts(S);
     }
    return 0;
}
