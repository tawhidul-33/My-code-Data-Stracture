// 4
// 5 1 3 2
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
    reverse(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
//O(n)