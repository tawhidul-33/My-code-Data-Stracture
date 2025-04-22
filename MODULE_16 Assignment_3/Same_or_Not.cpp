// 5 5
// 10 20 30 40 50
// 50 40 30 20 10
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    queue<int>q;
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
