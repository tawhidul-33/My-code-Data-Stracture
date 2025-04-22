#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    // // aikhane N obdi loop cholbe,,jar operation onek besi
    // for(int i=1;i<=N;i++)
    // {
    //     if(N%i==0)
    //     {
    //       cout<<i<<" "<<N/i<<" ";
            
    //     }
        
    // }

//Optimize kore ..coplexity komano
     for(int i=1;i<=sqrt(N);i++)//O(sqrt(N))
    {
        if(N%i==0)
        {
          cout<<i<<" "<<N/i<<" ";
            
        }
        
    }
    return 0;
}