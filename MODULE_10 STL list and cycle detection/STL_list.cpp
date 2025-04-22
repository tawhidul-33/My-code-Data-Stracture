#include<bits/stdc++.h>
using namespace std;
int main()
{
 //lis declarations multiples way

    list<int>l(10,5);
    cout<<l.size()<<endl;
    cout<<*l.begin()<<endl;
    //
    for(auto it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<endl;
    }
    //or
    for(int val:l)
    {
        cout<<val<<endl;
    }
    
    // //list theke list copy
    // list<int>l{1,2,3,4,5};
    // list<int>l2(l);//l2=l;
    // for(int val:l2)
    // {
    //     cout<<val<<endl;
    // }


    // //vector theke list a copy
    // vector<int>v={5,4,3,2,1};
    // list<int>l2(v.begin(),v.end());
    // for(int val:l2)
    // {
    //     cout<<val<<endl;
    // }

    // //Array theke list a copy
    // int ary[]={5,4,3,2,1};
    // list<int>l2(ary,ary+5);
    // for(int val:l2)
    // {
    //     cout<<val<<endl;
    // }
    return 0;
}