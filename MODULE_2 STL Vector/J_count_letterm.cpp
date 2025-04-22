//aaabbc
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    vector<int>f(26);
    for(char c:s)
    {
      int indx = c-'a';
      f[indx]++;

    }
    for(int i=0;i<26;i++)
    {
        if(f[i]!=0)
        {
            cout<<char(i+'a')<<" "<<":"<<" "<<f[i]<<endl;
        }
    }
    return 0;
}
