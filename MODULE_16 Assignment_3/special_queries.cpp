// 8 :-query
// 1
// 0 embappe
// 0 neymar
// 1 
// 1
// 0 messi
// 1
// 1
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    queue<string>q;
    while(t--)
    {
        int cmd;
        cin>>cmd;
        if(cmd==0)
        {
         string s;
         cin>>s;
         q.push(s);
        }
        else{
            if(q.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}