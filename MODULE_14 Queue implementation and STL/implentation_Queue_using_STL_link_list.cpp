// 5
// 10 20 30 40 50 
#include<bits/stdc++.h>
using namespace std;
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
    int back()
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
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    //output
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();

    }
    return 0;
}