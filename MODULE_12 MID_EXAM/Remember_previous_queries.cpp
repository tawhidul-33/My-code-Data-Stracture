#include<bits/stdc++.h>
using namespace std;
// 9
// 0 10
// 2 1
// 2 0
// 1 20
// 0 10
// 2 2
// 2 1
// 2 2
// 2 0
void print(list<int>&l)
{
    cout<<"L -> "; 
    for(int val:l)
    {
      cout<<val<<" ";
    }
    cout<<endl;
    cout<<"R -> ";
    for(auto it=l.rbegin();it!=l.rend();it++)
    {
      
       cout<<*it<<" "; 
    }
    cout<<endl;
}

int main()
{
    list<int>l;
    int n;
    cin>>n;
    while(n--)
    {
        int indx,val;
        cin>>indx>>val;
        if(indx==0)
        {
            l.push_front(val);
        }
        else if(indx==1)
        {
            l.push_back(val);
        }
        else if(indx==2)
        {
            if(val<l.size()&&val>=0)
            {
              l.erase(next(l.begin(),val));
            }

            
        }
        print(l);
    }
    
    return 0;
}