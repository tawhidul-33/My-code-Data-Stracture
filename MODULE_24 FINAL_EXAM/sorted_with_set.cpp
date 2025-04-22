// 6
// 8
// 3 10 0 6 9 5 10 10 
// 2
// 7 3 
// 6
// 7 8 2 0 6 3 
// 4
// 6 2 0 1 
// 10
// 10 0 7 8 5 3 0 3 0 4 
// 9
// 9 3 7 10 6 9 0 6 3 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        set<int>s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
           s.insert(val);
        }
        //print
        for(auto it=s.begin();it!=s.end();it++)
        {
          cout<<*it <<" ";  
        }
        cout<<endl;
    }
    
    return 0;
}