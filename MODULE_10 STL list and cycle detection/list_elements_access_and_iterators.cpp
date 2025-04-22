#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={10,20,30,40,50};
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<*next(l.begin(),2)<<endl;

    //iterator
    //l.begin() and l.end() ai 2ta iterator
    list<int>l2={1,2,3,4,5};
    cout<<*l2.begin()<<endl<<*l2.end();//iterator access korte derefarence korte hoy * dara
    
    return 0;
}