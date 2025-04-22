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
class student
{
 public:
  string name;
  int roll;
  int mark ;
    student(string name,int roll,int mark)
    {
        this->name=name;
        this->roll=roll;
        this->mark=mark;
    }
};
class cmp
{
    public:
    bool operator()(student l,student r)
    {
    //aikhane logic ulta kaj kore,
    //aita operator()()function er jonno
       if(l.mark<r.mark)
       {
        return true;
       }
       else if(l.mark==r.mark){
          if(l.roll>r.roll){
            return true;
           }
           return false;
       }
       else{
        return false;
       }
    }

};
int main()
{
    priority_queue<student,vector<student>,cmp>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
     string name;
     int roll,mark;
     cin>>name>>roll>>mark;
     student obj(name,roll,mark);
     pq.push(obj);
    }
    int query;
    cin>>query;
    while(query--)
    {
        int q;
        cin>>q;
        if(q==0)
        {
           string name;
        int roll,mark;
           cin>>name>>roll>>mark;
           student obj(name,roll,mark);
           pq.push(obj);
           cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
        }
        else if(q==1)
        {
          if(pq.empty()){
                cout<<"Empty"<<endl;
            }
            else{
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
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
              else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().mark<<endl;
    
            }
            
        }
    }
    
    return 0;
}