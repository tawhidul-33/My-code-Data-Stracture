//i love football we love football they love cricket
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    map<string,int>mp;
    while (ss>>word)
    {
        mp[word]++;//logN
    }
    //print
    for(auto it=mp.begin();it!=mp.end();it++)//NlogN
    {
        cout<<it->first<<" "<<it->second<<endl;//logN
    }
    
    return 0;
}