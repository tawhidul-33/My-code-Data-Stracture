#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //jodi size deya thake
    // int n;
    // cin>>n;
    // vector<int>v(n);
    // //input
    // for(int i=0;i<n;i++)
    // {
    //     cin>>v[i];
    // }
    // //output
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i]<<" ";
    // }


    //jodi size diya na thake
    vector<int>v;
    //input
    int x;
    while(cin>>x)
    {
        v.push_back(x);
    }
    //output
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}