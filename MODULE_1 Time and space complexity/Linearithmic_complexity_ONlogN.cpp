#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)//O(N)
    {
        for(int j=1;j<=N;j*=2)//O(logN)
        {
          cout<<"Hello"<<" ";
        }

        cout<<endl;
    }
    return 0;
    //linearithmic complexity = O(N*logN) = O(NlogN)
}