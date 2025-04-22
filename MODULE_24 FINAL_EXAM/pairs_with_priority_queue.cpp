// 5
// sakib 1
// rakib 2
// tasfia 3
// asfia 4
// afia 5
#include<bits/stdc++.h>
using namespace std;
class student
{
 public:
  string name;
  int roll;
    student(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
       
    }
};
class cmp
{
    public:
    bool operator()(student l,student r)
    {
    //aikhane logic ulta kaj kore,
    //aita operator()()function er jonno
       if(l.name>r.name)
       {
         return true;
          
       }
       if(l.name==r.name){
          if(l.roll<r.roll)
          {
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
    priority_queue<student,vector<student>,cmp> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string name;
        int roll;
        cin>>name>>roll;
        student obj(name,roll);
        pq.push(obj);
    }

    while(!pq.empty())
    {
      cout<<pq.top().name<<" "<<pq.top().roll<<endl;
      pq.pop();

    }
    return 0;
}