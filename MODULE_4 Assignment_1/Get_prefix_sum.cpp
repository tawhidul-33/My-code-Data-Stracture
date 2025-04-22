// 5
// 2 4 1 5 3
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
    vector<long long int>pf(n);
    pf[0]=v[0];
    for(int i=1;i<n;i++)
    {
        pf[i]=pf[i-1]+v[i];
    }
    reverse(pf.begin(),pf.end());
    for(int i=0;i<n;i++)
    {
        cout<<pf[i]<<" ";
    }
    return 0;
}