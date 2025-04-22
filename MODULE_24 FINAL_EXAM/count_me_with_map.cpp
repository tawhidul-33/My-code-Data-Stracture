// 2
// ratul piyush fohad shuvo rafi piyush fohad ratul 
// jony jony yes papa eating sugar no papa telling lies no papa open your mouth ha ha ha 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    string str;
    getline(cin,str);
    stringstream ss(str);
    string word;
    map<string,int>mp;
    int mx_cunt=0;
    string mx_word;
    while(ss>>word){
        mp[word]++;
        
        if(mp[word]>mx_cunt)
        {
            mx_cunt=mp[word];
            mx_word=word;
        }
        
    }
    cout<<mx_word<<" "<<mx_cunt<<endl;
    }
    return 0;
}