//input
// 2
// 1 2
// 3 4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<int>A(x);
    vector<int>B(x);
    for(int i=0;i<x;i++)
    {
        cin>>A[i];   
    }
    for(int i=0;i<x;i++)
    {
        cin>>B[i];    
    }
    vector<int>C;
    C=B;
    
    for(int i=0;i<x;i++)
    {
        C.push_back(A[i]);    
    }
    for(int i=0;i<C.size();i++)
    {
        cout<<C[i]<<" ";    
    }        
    
    return 0;
}