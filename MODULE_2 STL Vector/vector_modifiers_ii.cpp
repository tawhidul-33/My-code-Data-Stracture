#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //replace function
    // vector<int>v={1,2,3,2,5,2,6,2};
    // replace(v.begin(),v.end(),2,100);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    //found function
    vector<int>v={1,2,3,2,5,2,6,2};
    vector<int>::iterator it=find(v.begin(),v.end(),2);
    // or,, auto it=find(v.begin(),v.end(),2);
    if(it==v.end())
    {
        cout<<"Not found";
    }
    else{
        cout<<"fount";
    }
    return 0;
}