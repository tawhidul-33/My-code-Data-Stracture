// 5
// 10 20 30 40 50
// 5
// 10 20 30 40 50
#include<bits/stdc++.h>
using namespace std;
class myStack
{
  public:  
  list<int>l;
  int sz=0;
  void push(int val)
  {
    sz++;
    l.push_back(val);
  }
  void pop()
  {
    sz--;
    l.pop_back();
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
bool stackEqual( myStack st, myStack st2)
{
    while(!st.empty()&&!st2.empty())
    {
      if(st.top()!=st2.top())
      {
        return false;
      }
      st.pop();
      st2.pop();
    }
    return true;
}
int main()
{
  //first stack input
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }    
    //second stack input
    myStack st2;
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int val;
        cin>>val;
        st2.push(val);
    }
    if (st.size()!=st2.size())
    {
      cout<<"NO"<<endl;
    }
    else
    {
      if(stackEqual(st,st2))
      {
        cout<<"YES"<<endl;
      }
      else
      {
        cout<<"NO"<<endl;
      }
    } 
    return 0;
}