//input
// 5
// 1 -2 0 3 4
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
    for(int i=0;i<n;i++)
    {
       if(v[i]<0)
       {
        cout<<2<<" ";
       }
       else if(v[i]>0)
       {
        cout<<1<<" ";
       }
       else{
        cout<<0<<" ";
       }
    }
    
    return 0;
}