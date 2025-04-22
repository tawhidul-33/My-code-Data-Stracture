//5
//1 2 2 4 5
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
     cin>>v[i];
    }
    sort(v.begin(),v.end());
    int flag=1;
    for(int i=1;i<n;i++)
    {
        if(v[i]==v[i-1])
        {
           flag=0;
           break; 
        }
     
    }
    if(flag==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

    return 0;
}