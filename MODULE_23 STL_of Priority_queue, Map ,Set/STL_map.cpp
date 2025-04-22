#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    mp["siyam"]=2;
    mp["Rohul"]=3;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        cout<< it->first<<" "<<it->second<<endl;
    }
    //
    if(mp.count("sakib"))//map a sakib ace ki nai cheking
    {
     cout<<"ache";
    }else{
        cout<<"nai";
    }
    return 0;
}