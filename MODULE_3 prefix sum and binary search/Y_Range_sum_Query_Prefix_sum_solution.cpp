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
    vector<long long int>v(as);
    for(int i=1;i<=as;i++)
    {
        cin>>v[i];
    }

    //prefix_sum
    vector<long long int>pre(as);
    pre[1]=v[1];
    for(int i=2;i<=as;i++)
    {
      pre[i]=pre[i-1]+v[i];
    }
    
    while(qs--)
    {
      int fq,lq;  
      cin>>fq>>lq;
      long long int sum=0;
      if(fq==1)//1 dara ai khane first index bujano hoiteche
      {
         sum=pre[lq];
      }
      else
      {
        sum=pre[lq]-pre[fq-1];
      }
      
      cout<<sum<<endl;
      
    }
    return 0;
}
