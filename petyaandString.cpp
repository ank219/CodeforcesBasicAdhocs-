#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100],ss[100];
    gets(s);
    gets(ss);
int counter=0;
   int n=sizeof(s)/sizeof(char);
    for(int i=0;i<n;i++)
    {   char a=tolower(s[i]);
        char b=tolower(ss[i]);
        if(a==b)
           {
               counter++;
               continue;
           }
        if(a<b)
        {
            cout<<-1<<endl;
            break;
        }
        if(a>b)
        {
            cout<<1<<endl;
            break;
        }

    }
    if(counter==n)
        cout<<0<<endl;
}
