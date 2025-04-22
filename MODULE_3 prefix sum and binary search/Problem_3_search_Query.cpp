// 5
// 6 3 2 1 8

// 4

// 1
// 5
// 2
// 9
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
    int q;
    cin>>q;
    
    while(q--)
    {
        int query;
        cin>>query;
        int l=0,r=n-1;
        int flag=0;
        while(l<=r)
        {
          int mid=(l+r)/2;
          if(v[mid]==query)
          {
            flag=1;
            break;
          }
          else if(v[mid]>query)
          {
            r=mid-1;
          }
          else
          {
            l=mid+1;
          }  
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}