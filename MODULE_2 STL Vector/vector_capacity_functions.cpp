#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int>v;
    // cout<<v.capacity()<<endl;
    // v.push_back(10);
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.clear();//aikhane vector er size clear hoy but valu theke jay
    // cout<<v.size()<<endl;
    // cout<<v[0]<<endl;
    // v.push_back(15);//tobe clear korar por push_back korle first indx ai valu push hobe
    // cout<<v[0]<<endl;

    vector<int>v;
    if(v.empty())
    {
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    v.push_back(10);
    if(v.empty())
    {
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    v.clear();
    if(v.empty())
    {
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }
    return 0;
    
}