#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i*=2)//O(logN)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=N;i>=1;i/=3)//O(logN)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
    // increment decrement jodi gun ba vag hoy
    // tahole logarithamic cimplexity hoy
    
}
