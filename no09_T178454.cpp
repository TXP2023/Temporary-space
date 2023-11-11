#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;
int main()
{
	char m[200],a[26],x;
    long s[26],j;
    for (int i = 0; i < 26; i++)
    {
        a[i]=i+'a';
        s[i]=0;
    }
    
    int n,i,ti;
    cin>>n;
    cin>>m;
    //cout<<strlen(m);
    while (strlen(m)>0)
    {
        for(i=0;i<strlen(m);i++)
        {
            if ((m[i]>='a' && m[i]<='z'))
            {
                s[m[i]-'a']++;
            }
            else
            {
                if ((m[i]>='A' && m[i]<='Z'))
                {
                    s[m[i]-'A']++;
                }
            }
        }
        
        cin.getline(m,200);
    }
    //for(i=0;i<26;i++)
    //{
    //    for(ti=0;ti<25-i;ti++)
    //    {
    //        if(s[ti]<s[ti+1])
    //        {
    //            {
    //                j=s[ti];
    //                s[ti]=s[ti+1];
    //                s[ti+1]=j;
    //            }
    //            {
    //                x=a[ti];
    //                a[ti]=a[ti+1];
    //                a[ti+1]=x;
    //            }
    //        }
    //    }
    //}
    for(i=0;i<26;i++)
    {
        if(s[i]>0 && i<n)
        {
            cout<<a[i]<<":"<<s[i]<<endl;
        }
    }
	return 0;
}
