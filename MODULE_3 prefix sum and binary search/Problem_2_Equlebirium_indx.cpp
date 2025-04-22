// 7
// -7 1 5 2 -4 3 0

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
    vector<int>pfx1(n);
    pfx1[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pfx1[i]=pfx1[i-1]+v[i];
    }
    
    vector<int>pfx2(n);
    pfx2[n-1]=v[n-1];
    for(int i=n-2;i>=0;i--)
    {
        pfx2[i]=pfx2[i+1]+v[i];
    }

    for(int i=1;i<n-1;i++)
    {
        if(pfx1[i-1]==pfx2[i+1])
        {
            cout<<i;
            break;
        }
    }


   
    return 0;
}