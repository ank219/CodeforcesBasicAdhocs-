#include<bits/stdc++.h>
using namespace std;

int main()
{

    char S[100];
    scanf("%s",S);

    int k=strlen(S);
    int j=0;
    for(int i=0;i<k;i++)
    {
        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'||S[i]=='A'||S[i]=='E'||S[i]=='I'||S[i]=='O'||S[i]=='U'||S[i]=='y'||S[i]=='Y')
                {
                    continue;
                }
        else

            cout<<'.'<<(char)tolower(S[i]);





    }
 return 0;
}
