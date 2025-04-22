// 5 5
// 10 20 30 40 50
// 50 40 30 20 10
#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int>l;
    int sz=0;
    void push(int val)
    {
        l.push_back(val);
        sz++;
    }
    void pop()
    {
        l.pop_back();
        sz--;
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return l.empty();
    }
};
class myQueue
{
    public:
    list<int>l;
    int sz=0;
    void push(int val)
    {
        l.push_back(val);
        sz++;
    }
    void pop()
    {
        l.pop_front();
        sz--;
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStack st;
    myQueue q;
    int n,m;
    cin>>n>>m;
    //stack input
    while(n--)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    //queue input
    while(m--)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    //cheking Stack &Queue equal or not equal
    if(st.size()==q.size())
    {
        while(!st.empty()&&!q.empty())
        {
            if(st.top()!=q.front())
            {
                cout<<"NO"<<endl;
                return 0;
            }
            st.pop();
            q.pop();
        }
        cout<<"YES"<<endl;
    }
    else
    {
         cout<<"NO"<<endl;
    }
    return 0;
}
