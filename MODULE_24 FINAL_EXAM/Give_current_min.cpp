// 3
// akib 23 95
// jobbar 24 99
// ali 25 100
// 8
// 1
// 2
// 2
// 2
// 0 kabir 15 65
// 0 asif 55 65
// 2
// 0 tamim 35 65
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     int val;
     cin>>val;
     pq.push(val);
    }
    int query;
    cin>>query;
    while(query--)
    {
        int q;
        cin>>q;
        if(q==0)
        {
           int insert_val;
           cin>>insert_val;
           pq.push(insert_val);
           cout<<pq.top()<<endl;
        }
        else if(q==1)
        {
          if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                cout<<pq.top()<<endl;
            }  
         
        }
        else if(q==2)
        {
            if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
              pq.pop();
              if(pq.empty())
                cout<<"Empty"<<endl;
              else cout<<pq.top()<<endl;
    
            }
            
        }
    }
    
    return 0;
}