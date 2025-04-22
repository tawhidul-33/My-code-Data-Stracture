/*
// assign function
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={2,4,6,8};
    vector<int>v2;
    v2=v; //Or, v2.assign(v.begin(),v.end());
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout<<v2[i]<<" ";
    // }
    //or
    for(int x:v2)
    {
        cout<<x<<" ";
    }
    return 0;
}
*/

//pop_back(),,insert(),,erase()  function er using
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>v={2,4,6,8};
    //v.pop_back();

    // //akti valur jonno insert
    // //jei indx a insert korbe v.begin()+2 dara nirdes kore,, ar 5 hoilo valu
    // vector<int>v={2,4,6,8};
    // v.insert(v.begin()+2,5);
    
    // //multiple valu insert
    // vector<int>v={1,2,3,8,9,10};
    // vector<int>v2={4,5,6,7};
    // v.insert(v.begin()+3,v2.begin(),v2.end());
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    // //erase function for akti valu
    // vector<int>v={1,2,3,8,9,10,4,5};
    // v.erase(v.begin()+5);
    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }

    //erase function for multiple valu
    vector<int>v={1,2,3,8,9,10,4,5};
    v.erase(v.begin()+3,v.begin()+6);
    for(int x:v)
    {
        cout<<x<<" ";
    }


    return 0;
}