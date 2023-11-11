#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char r[30],a[26];
    int s[26],i,ti,j,x;
    for ( i = 0; i < 26; i++)
    {
        s[i]=0;
        a[i]=i+'A';
    }
    i=0;
    cin>>r;

    for(i=0;i<(strlen(r)-1);i++)
    {
        s[r[i]-'a']++;
    } 
    for(i=0;i<26;i++)
    {
        for(ti=0;ti<25-i;ti++)
        {
            if(s[ti]<s[ti+1])
            {
                {
                    j=s[ti];
                    s[ti]=s[ti+1];
                    s[ti+1]=j;
                }
                {
                    x=a[ti];
                    a[ti]=a[ti+1];
                    a[ti+1]=x;
                }
            }
        }
    }
    i=0;
    while (i<(strlen(r)-1))
    {
        if (s[i]>0)
        {
            cout<<a[i]<<" "<<s[i]<<endl;
        }
        i++;
    }
    return 0;
}