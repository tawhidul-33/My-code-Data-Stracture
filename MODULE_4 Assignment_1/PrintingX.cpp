//input 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n/2;i++)
    {
      string str(n,' ');
      str[i]='\\';
      str[n-1-i]='/';
      cout<<str<<endl;
    }

    string str(n,' ');
    str[n/2]='X';
    cout<<str<<endl;

    for(int i=n/2-1;i>=0;i--)
    {
      string str(n,' ');
      str[i]='/';
      str[n-1-i]='\\';
      cout<<str<<endl;
    }

    return 0;
}