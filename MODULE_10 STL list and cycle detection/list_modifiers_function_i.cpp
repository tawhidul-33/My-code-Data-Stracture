#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //assign
    // list<int>l={10,20,30};
    // list<int>l2;
    // l2.assign(l.begin(),l.end());
    // //or,,l2=l;
    // for(int val:l2)
    // {
    //     cout<<val<<endl;
    // }

    // //push_back(),,push_front()
    // list<int>l={10,20,30};
    // l.push_back(40);
    // l.push_front(5);
    // for(int val:l)
    // {
    //     cout<<val<<endl;
    // }

    // //pop_back(),,pop_front()
    // list<int>l={10,20,30};
    // l.pop_back();
    // l.pop_front();
    // for(int val:l)
    // {
    //     cout<<val<<endl;
    // }

    // //next(),,insert(),,erase()
    // list<int>l={10,20,30,40,50,60};
    // list<int>l2={200,300};
    // cout<<*next(l.begin(),2)<<endl;//jekno indx a jeye access/print
    // l.insert(next(l.begin(),5),100);//insert_at_any_poss
    // l.insert(next(l.begin(),5),l2.begin(),l2.end());
    // //l.erase(next(l.begin(),1));//delete_at_any_poss for 1 valu
    // l.erase(next(l.begin(),1),next(l.begin(),4));//delete_at_any_poss for multiple valu
    // for(int val:l)
    // {
    //     cout<<val<<endl;
    // }

    //replace()
    list<int>l={10,20,30,20,50,20};
    replace(l.begin(),l.end(),20,100);
    for(int val:l)
    {
        cout<<val<<endl;
    }
    auto it=find(l.begin(),l.end(),200);
    if(it==l.end())
    {
        cout<<"Not Found";
    }
    else{
        cout<<"Found";
    }
    
    return 0;
}