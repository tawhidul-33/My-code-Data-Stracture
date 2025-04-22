// 7 :-query
// 01
// 10
// 0011
// 0101
// 01001110
// 000111010011
// 00011
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        stack<char>st;
        for(char c:str)
        {
            if(c=='0')
            {
                st.push(c);
            }
            else if(c=='1')
            {
                if(!st.empty()&&st.top()=='0')
                {
                  st.pop();
                }
                else
                {
                    st.push(c);
                }
                
            }
            
        }
        if(st.empty())
          cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;

    }
    
    return 0;
}