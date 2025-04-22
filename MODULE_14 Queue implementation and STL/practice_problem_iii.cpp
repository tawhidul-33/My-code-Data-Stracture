// 5
// 10 20 30 40 50
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    int n;
    cin>>n;
    while(n--)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    //copy to new stack
    stack<int>st2;
    while(!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    //output
     while(!st2.empty())
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    return 0;
}