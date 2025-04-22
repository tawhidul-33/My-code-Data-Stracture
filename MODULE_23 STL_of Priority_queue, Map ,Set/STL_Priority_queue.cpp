#include<bits/stdc++.h>
using namespace std;
int main()
{
    // //max priority_queue
    // priority_queue<int>pq;
    // pq.push(10);
    // pq.push(50);
    // pq.push(5);
    // cout<<pq.top();


    //min priority_queue
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10);
    pq.push(50);
    pq.push(5);
    cout<<pq.top();



    return 0;
}