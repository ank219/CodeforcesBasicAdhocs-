#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0,cc=0,x=0;
    cin>>n;
    string s;
    while(n--)
    {
     cin>>s;
     for(int i=0;i<s.length();i++)
      {
            if(s[i]==43)
               counter++;
             if(s[i]==45)
              cc++;
      }

      if(counter==2)
          x=x+1;
      if(cc==2)
          x=x-1;

      counter=0;
      cc=0;

    }
    cout<<x<<endl;
    return 0;
}

