#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l;
    while(1)
    {
        int val;
        cin>>val;
        if(val==-1)
        {
            break;
        }
        l.push_back(val);
        
  
    }
    l.sort();
    l.unique();
    for(int val:l)
    {
        cout<<val<<" ";
    }
    return 0;
}