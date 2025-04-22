// 10 := query number
// 0011
// 1010
// 1100
// 0101
// 0001
// 0111
// 0110
// 100101
// 1110010
// 0001011011
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
            if(st.empty())
            {
              st.push(c);
            }
            else if(c=='0'&&st.top()=='1'||c=='1'&&st.top()=='0')
            {
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        if(st.empty())
          cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;

    }
    
    return 0;
}