// 11
// 2 4 3 6 4 7 8 9 1 1 2
//behind the seen binery_seacrh,,
//valu guluke choto theke boro onusare sajay
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        s.insert(val);//logN
    }
    for(auto it=s.begin();it!=s.end();it++)//NlogN
    {
     cout<<*it <<endl;  
    }
    //set a 4 ace ki nai cheking
    if(s.count(4))//logN
    {
     cout<<"ache";
    }else{
        cout<<"nai";
    }
    return 0;
}