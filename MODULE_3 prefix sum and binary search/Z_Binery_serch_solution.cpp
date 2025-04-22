// Input
// 5 3
// 1 5 4 3 2
// 5
// 3
// 6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    while(q--)
    {
    int qury;
    cin>>qury;
    int l=0,r=n-1;
    int flag=0;
    while(l<=r)
    {
      int mid=(l+r)/2;
      if(v[mid]==qury)
      {
        flag=1;
        break;
      }
      else if(v[mid]<qury)
      {
        l=mid+1;
      }
      else{
        r=mid-1;
      }
    }
       
        if(flag==1)
        {
            cout<<"found"<<endl;

        }
        else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}