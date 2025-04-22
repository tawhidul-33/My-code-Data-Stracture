#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int qury;
    cin>>qury;
    int l=0,r=n-1;
   int flag=0;
    while(l<=r)
    {
      int mid=(l+r)/2;
      if(ar[mid]==qury)
      {
        flag=1;
        break;
      }
      else if(ar[mid]<qury)
      {
        l=mid+1;
      }
      else{
        r=mid-1;
      }
    }

    if(flag==1)cout<<"found"<<endl;
    else cout<<"not found"<<endl;
    
    return 0;
}