#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;

   cin>>s;
   int n=s.size();
   vector<int> ss;
    int j=0;

   for(int i=0;i<n;i++)
   {
       if(isdigit(s[i]))
       {
           ss.push_back(s[i]-'0');
           j++;

       }

   }
int p=ss.size();
   sort(ss.begin(),ss.end());
    for(int i=0;i<p-1;i++)
    {
        cout<<ss[i]<<"+";
    }
    cout<<ss[p-1];
}

