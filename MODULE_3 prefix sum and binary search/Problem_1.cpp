// 4
// 1 2 3 4
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
    vector<int>prfx(n);
    prfx[0]=v[0];
    for(int i=1;i<n;i++)
    {
        prfx[i]=prfx[i-1]+v[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<prfx[i]<<" ";
    }
    return 0;
}
