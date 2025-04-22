#include<bits/stdc++.h>
using namespace std;
int main()
{
       list<int>l(10,5);
    cout<<l.size()<<endl;
    cout<<l.max_size()<<endl;
    //l.clear();
    if(l.empty())
    {
        cout<<"empty"<<endl;
    }
    l.resize(15);//l.resize(15,10);//l.resize(5);
    for(int val:l)
    {
        cout<<val<<endl;
    }
   
    return 0;
}