// 6 3
// 6 4 2 7 2 7
// 1 3
// 3 6
// 1 6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int as,qs;
    cin>>as>>qs;
    vector<int>v(as);
    for(int i=1;i<=as;i++)
    {
        cin>>v[i];
    }
    int fq,lq;
    while(qs--)
    {
        int sum=0;
      cin>>fq>>lq;
      for(int i=fq;i<=lq;i++)
      {
         sum+=v[i];
      }
      cout<<sum<<endl;
      
    }
    return 0;
}
//code is right but  this code not accevted in online judge
//resone, complexity besi ,,, so i need to do better way