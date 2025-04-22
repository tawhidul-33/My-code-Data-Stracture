// 5
// 10 20 30 40 50
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    //copy queue to stack
    stack<int>st;
    while(!q.empty())
    {
       st.push(q.front());
       q.pop();
    }
    //Again,,copy stack to queue
    while(!st.empty())
    {
       q.push(st.top());
       st.pop();
    }
    //output
     while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}